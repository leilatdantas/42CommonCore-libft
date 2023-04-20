/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:27 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/17 14:20:08 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
**	LIBRARY: <ctype.h>
**	DEF: Checks for an alphabetic character
**	RETURN VALUE: Nonzero if the character c falls into the tested class, and 
**	zero if not.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
