/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:17:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/25 19:48:49 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DEF: Outputs the integer ’n’ to the given file descriptor.
**	RETURN VALUE: None.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	mult;

	mult = 10;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 2147483647)
		ft_putstr_fd("2147483647", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		while (mult <= n)
			mult = mult * 10;
		mult = mult / 10;
		while (mult >= 10)
		{
			ft_putchar_fd((((n / mult) % 10) + '0'), fd);
			mult = mult / 10;
		}
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}

/*int main (void)
{
	ft_putnbr_fd(-214748364, 1);
}*/