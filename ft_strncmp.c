/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:58:00 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 15:34:56 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DEF: Compares the first n bytes of s1 an s2.
**  RETURN VALUE: An integer less than, equal to, or greater than zero if s1 
**  is found. 
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && (i < n))
		i++;
	return (s1[i] - s2[i]);
}
