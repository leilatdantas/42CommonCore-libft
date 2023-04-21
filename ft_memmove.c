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
	const unsigned char	*s;
	unsigned char		*temp;
	size_t				i;

	d = dest;
	s = src;
	temp = (unsigned char *)malloc(n);
	i = 0;
	if (temp == NULL)
		return (NULL);
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
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "hello world";
    char dest[20];

    printf("Before memmove dest = %s, src = %s\n", dest, src);

    ft_memmove(dest, src, strlen(src) + 1);

    printf("After memmove dest = %s, src = %s\n", dest, src);

    return 0;
}*/