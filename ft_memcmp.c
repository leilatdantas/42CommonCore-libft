/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:12:22 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/24 10:01:54 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DEF: Compares the first n bytes of the memory areas s1 and s2.
**  RETURN VALUES: An integer less than, equal to, or greater than zero if the
**  first n bytes of s1 is found. 
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[15] = "Hello, world!";
	char str2[15] = "Hello, World!";
	int result1 = ft_memcmp(str1, str2, 15);
	int result2 = memcmp(str1, str2, 15);
	printf("Result1: %d\n", result1);
	printf("Result2: %d\n", result2);
	return 0;
}
*/