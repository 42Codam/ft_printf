/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 14:12:36 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/30 11:59:56 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;
	size_t	len_haystack;
	int		ret;

	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	if (len_needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == *needle && (i + len_needle - 1) < len)
		{
			ret = ft_strncmp(haystack + i, needle, len_needle);
			if (ret == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
