/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:44:19 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/19 14:37:23 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Copies n bytes from memory area src to memory area dst. The memory 
**	areas may overlap. 
**	RETURN VALUE: A pointer to dest. 
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		*temp;
	int					i;

	d = dest;
	s = src;
	temp = (unsigned char *)malloc(n);
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	free (temp);
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char dest[] = "teste";
	char src[] = "casas";
	int len = 2;

	printf("Before: \ndest = %s\nsrc = %s\n", dest, src);

	memmove(dest, src, len);

	printf("After: \ndest = %s\nsrc = %s\n", dest, src);

	return 0;
}*/
