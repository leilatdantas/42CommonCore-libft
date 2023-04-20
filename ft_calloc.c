/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 17:16:33 by lebarbos         ###   ########.fr       */
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
