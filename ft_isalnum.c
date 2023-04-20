/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:06:23 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 17:51:45 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <ctype.h>
**	DEF: Checks for an alphanumeric character
**	RETURN VALUE: Nonzero if the character c falls into the tested class, and 
**	zero if not. 
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c;

	// Testa alguns caracteres alfanuméricos
	c = '0';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));
	c = 'A';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));
	c = 'a';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));

	// Testa alguns caracteres que não são alfanuméricos
	c = '#';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));
	c = '-';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));
	c = '/';
	printf("%c é alfanumérico? %d\n", c, ft_isalnum(c));

	return (0);
}
*/