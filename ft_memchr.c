/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:05:45 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 18:10:53 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DEF: Scans the initial n bytes of the memory area pointed to by s for the 
**  first instance of c. 
**  RETURN VALUE: A pointer to the matching byte or NULL if the character does
**  not occur in the given memory area. 
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello, world!";
	char *ptr;

	ptr = ft_memchr(str, 'w', strlen(str));
	if (ptr != NULL)
		printf("Valor encontrado: %c\n", *ptr);
	else
		printf("Valor nao encontrado.\n");

	return (0);
}
*/