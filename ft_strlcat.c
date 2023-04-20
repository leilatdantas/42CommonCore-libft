/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:56:01 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/19 15:22:26 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DEF: Appends the NUL-terminated string src to the end of dst. It will append
**  at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
**  RETURN VALUE: The initial length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	while (dst[dstlen] != '\0' && dstlen < size)
		dstlen++;
	srclen = 0;
	while (src[srclen] != '\0' && dstlen + srclen + 1 < size)
	{
		dst[dstlen + srclen] = src[srclen];
		srclen++;
	}
	if (dstlen < size)
		dst[dstlen + srclen] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	return (dstlen + srclen);
}
