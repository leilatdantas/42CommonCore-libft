/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:27:44 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/19 15:26:20 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DEF: Locates the first occurence of the null-terminated string little in 
**  in the string big, where not more than len characters are sarched.
**  RETURN VALUE: If little is an empty string, big is returned; if little 
**  occurs nowhere in big, NULL is returned; otherwise a pointer to the first
**  character of the first occurence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;

	littlelen = ft_strlen(little);
	if (littlelen == 0)
		return ((char *) big);
	while (*big != '\0' && len >= littlelen)
	{
		if (*big == *little && ft_strncmp(big, little, littlelen) == 0)
			return ((char *)big);
	}
	return (NULL);
}
