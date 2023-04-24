/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:16:16 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/24 16:06:46 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DEF: Allocates (with malloc) and returns a string representing the integer
**  received as an argument. Negatives numbers must be handled. 
**  RETURN VALUE: The string representing the integer. NULL if the allocation
**  fails. 
*/

#include "libft.h"

static int	countsize(int nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	while (nbr > 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

static char	*ft_putnbr(int n, char *str, int size)
{
	int	i;

	i = size - 1;
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = countsize(n);
	str = malloc(sizeof(char *) * (size + 1));
	if (str == NULL)
		return (NULL);
	str = ft_putnbr(n, str, size);
	return (str);
}

/*#include "libft.h"
#include <stdio.h>

int main(void) {
    int num = -2147483648;
    char *str_num = ft_itoa(num);
    printf("O número %d em string é: %s\n", num, str_num);
    free(str_num);
    return 0;
}
*/