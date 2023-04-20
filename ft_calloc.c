/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 17:48:59 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <stdlib.h>
**  DEF: Allocates memory for an array of nmemb elements of size bytes each.
**  RETURN VALUE: A pointer to the allocated memory.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	i = 0;
	if (ptr != NULL)
	{
		while (i < nmemb * size)
		{
		*(ptr + i) = 0;
		i++;
		}
	}
	return ((void *)ptr);
}

/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str;
	int	i = 0;

	// Aloca uma string com 10 caracteres
	str = (char *)ft_calloc(10, sizeof(char));

	// Verifica se a alocação foi bem sucedida
	if (str == NULL)
	{
		printf("Erro ao alocar memória\n");
		return (1);
	}
	while (i < 10)
	{
		if (str[i] == '\0')
			printf("%d: 0\n", i);
		else
			printf("%d: %c\n", i, str[i]);
		i++;
	}
	
	// Copia uma mensagem para a string
	strcpy(str, "Hello!");

	// Imprime a mensagem
	printf("%s\n", str);

	// Libera a memória alocada
	free(str);

	return (0);
}
*/