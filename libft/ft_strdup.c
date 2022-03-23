/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/21 22:21:34 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/02 11:52:36 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (s1_len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	return (ptr);
}
