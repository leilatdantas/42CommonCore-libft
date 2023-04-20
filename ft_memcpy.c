/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:18:50 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/19 14:38:09 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Copies n bytes from memory area src to memory area dest. The memory 
**	area must not overlap.
**	RETURN VALUE: Returns a pointer to dest. 
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*src1;
	unsigned int		i;

	i = 0;
	ptr = dest;
	src1 = src;
	while (i < n)
	{
		ptr[i] = src1[i];
		i++;
	}
	return ((void *)dest);
}
