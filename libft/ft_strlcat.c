/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 06:51:11 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/28 14:43:22 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		offset;
	size_t		src_index;
	size_t		len_src;

	len_src = ft_strlen(src);
	offset = ft_strlen(dst);
	src_index = 0;
	if (!dstsize || dstsize < offset)
		return (len_src + dstsize);
	while (src[src_index] && (offset + src_index) < (dstsize - 1))
	{
		dst[offset + src_index] = src[src_index];
		src_index++;
	}
	dst[offset + src_index] = '\0';
	return (len_src + offset);
}
