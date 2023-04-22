/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:45:02 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/22 12:57:19 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DEF: Allocates (with malloc) and returns a new string, which is the result
**	of the concatenation of s1 and s2.
**	RETURN VALUE: The new string. NULL if the allocation fails. 
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*newstring;

	newstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstring || !s1 || !s2)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		newstring[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		newstring[i + j] = s2[j];
		j++;
	}
	newstring[i + j] = '\0';
	return (newstring);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str1 = "Hello ";
    char *str2 = "World";
    char *result = ft_strjoin(str1, str2);
    if (result == NULL)
    {
        printf("ft_strjoin returned NULL.\n");
        return (1);
    }
    printf("%s\n", result);
    free(result);
    return (0);
}
*/