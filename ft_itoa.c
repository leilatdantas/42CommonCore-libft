/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:16:16 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/24 19:53:23 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DEF: Allocates (with malloc) and returns a string representing the integer
**  received as an argument. Negatives numbers must be handled. 
**  RETURN VALUE: The string representing the integer. NULL if the allocation
**  fails. 
*/

#include "libft.h"
#include <stdio.h>

static int	ft_countsize(int nbr)
{
	int	size;

	size = 1;
	if (nbr < 0)
	{
		size++;
		nbr = -nbr;
	}
	while (nbr / 10 > 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

static void	ft_putnstr(int n, char *str, int size)
{
	int	check;

	check = 0;
	str[size] = '\0';
	while (size > check)
	{
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
			check++;
		}
		else
		{
			str[size - 1] = (n % 10) + '0';
			n = n / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_countsize(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_putnstr(n, str, size);
	return (str);
}

/*#include "libft.h"
#include <stdio.h>

int main(void) {
    int num = 2147483647;
    char *str_num = ft_itoa(num);
    printf("O número %d em string é: %s\n", num, str_num);
    free(str_num);
    return 0;
}*/