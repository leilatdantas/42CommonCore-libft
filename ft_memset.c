/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:06:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 17:11:05 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DEF: Fills the first n bytes of the memory area pointed to by s with the 
**	constant byte c. 
**	RETURN VALUE: Returns a pointer to the memory area s. 
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	b;
	size_t			i;

	ptr = s;
	i = 0;
	b = (unsigned char) c;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return ((void *)s);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str[10];
	void	*ptr;

	memset(str, 'A', sizeof(str));
	printf("memset: %s\n", str);

	ptr = ft_memset(str, 'B', sizeof(str));
	if (ptr == NULL)
	{
		printf("Erro: alocação de memória falhou\n");
		return (EXIT_FAILURE);
	}
	printf("ft_memset: %s\n", str);

	return (EXIT_SUCCESS);
}
*/
