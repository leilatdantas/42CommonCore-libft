/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:18:50 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 18:40:57 by lebarbos         ###   ########.fr       */
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
	size_t				i;

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


#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int src[] = {1, 2, 3, 4, 5};
	int dest[5];
	//size_t n = sizeof(src);
	
	ft_memcpy(dest, src, 20);
	for (size_t i = 0; i < 5; i++)
	{
		//printf("TAmanho em bytes de src: %zu\n", n);
		printf("%zu : %d\n", i, dest[i]);
	}
	return (0);
}
