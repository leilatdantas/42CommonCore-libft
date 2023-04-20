/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:27 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/20 18:03:08 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <ctype.h>
**	DEF: Checks for an alphabetic character
**	RETURN VALUE: Nonzero if the character c falls into the tested class, and 
**	zero if not.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>

int main()
{
    int result1 = ft_isalpha('A'); // deve retornar 1
    int result2 = ft_isalpha('5'); // deve retornar 0
    int result3 = ft_isalpha('$'); // deve retornar 0

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);

    return 0;
}
*/