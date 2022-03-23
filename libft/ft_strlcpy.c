/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 16:34:06 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/16 08:50:02 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dssize)
{
	size_t	i;
	int		src_len;

	src_len = ft_strlen(src);
	if (!dssize || !src)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < dssize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
