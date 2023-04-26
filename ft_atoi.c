/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:39:30 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/26 12:55:18 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <stdlib.h>
**	DEF: Converts the inicial portion of the string pointed to by nptr to int.
**	RETURN VALUE: The converted value. 
*/

#include "libft.h" 

int	ft_atoi(const char *str)
{
	int	r;
	int	s;

	r = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			s = s * (-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str - 48);
		str++;
	}
	return (r * s);
}
