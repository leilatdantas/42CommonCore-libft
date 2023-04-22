/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:20:48 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/22 15:41:30 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DEF: Allocates (with malloc) and returns a substring from string 's'. The 
**	substring begins at index 'start' and is of maximum size 'len'.
**	RETURN VALUE: The substring. NULL if the allocation fails. 
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*newstring;

	newstring = malloc(sizeof(char) * len + 1);
	if (!newstring || !s)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		newstring[j] = s[i];
		j++;
		i++;
	}
	newstring[j] = '\0';
	return (newstring);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Hello, World!";
    char *sub = ft_substr(str, 7, 5);
    printf("%s\n", sub);
    return 0;
}*/
