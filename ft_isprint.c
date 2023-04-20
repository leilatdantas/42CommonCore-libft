/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:42:59 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/17 14:22:40 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
**	LIBRARY: <ctype.h>
**	DEF: Checks for any printable character including space
**	RETURN VALUE: Nonzero if the character c falls into the tested class, and
**	zero if not.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
