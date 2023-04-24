/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:37:02 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/24 14:02:53 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DEF: Allocates and returns an array of strings obtained by splitting 's'
**  using the character 'c' as a delimiter. The array must end with a NULL 
**  pointer.
**  RETURN VALUE: The array of new strings resulting from the split. NULL if
**  the allocation fails.  
*/

#include "libft.h"

static int	ft_countword(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char		*dup;
	size_t		i;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	index;
	unsigned int	words;
	size_t			j;
	size_t			wordlen;
	char			**array;

	index = 0;
	j = 0;
	words = ft_countword(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!s || !(array))
		return (NULL);
	while (index < words)
	{
		while (s[j] == c)
			j++;
		wordlen = 0;
		while (s[j + wordlen] != '\0' && s[j + wordlen] != c)
			wordlen++;
		array[index] = ft_strndup(&s[j], wordlen);
		j = j + wordlen;
		index++;
	}
	array[index] = NULL;
	return (array);
}

/*#include "libft.h"
#include <stdio.h>

int main() {
    char s[] = "Esta e uma string de exemplo";
    char c = ' ';
    char** substrings = ft_split(s, c);
    int i = 0;
    while (substrings[i] != NULL) {
        printf("%s\n", substrings[i]);
        free(substrings[i]);
        i++;
    }
    free(substrings);
    return 0;
}*/
