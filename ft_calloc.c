/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/24 12:02:11 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <stdlib.h>
**  DEF: Allocates memory for an array of nmemb elements of size bytes each The allocated 
**	memory is filled with bytes of value zero.
**  RETURN VALUE: A pointer to the allocated memory.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = malloc(nmemb * size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

/*#include "libft.h"
#include <stdio.h>

int main()
{
    int *ptr = ft_calloc(10, 0);

    if (ptr == NULL)
    {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}
*/