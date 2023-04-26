/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:03:16 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/26 12:55:25 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Erases the data in the n bytes of the memory starting at the location
**	pointed by s, by writing zeros ('\0') to that area.
**	RETURN VALUE: none
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
