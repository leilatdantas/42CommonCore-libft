/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:49:36 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/19 14:41:32 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Returns a pointer to the first occurence of the character c in the 
**	string s. 
**	RETURN VALUE: A pointer to the matched character or NULL if the character
**	is not found. 
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == '\0')
	{
		if (c != '\0')
			return (NULL);
		else
			return ((char *)(s + i));
	}
	return ((char *)(s + i));
}
