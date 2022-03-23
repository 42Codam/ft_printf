/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 15:28:16 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/20 18:26:38 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_ptr;
	size_t	i;

	if (s1 == 0)
		return (NULL);
	while (ft_strchr(set, *s1) != 0 && (*set != '\0' && *s1 != '\0'))
		s1++;
	if (*(s1) == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != 0)
		i--;
	str_ptr = malloc(i + 2);
	if (!str_ptr)
		return (NULL);
	ft_strlcpy(str_ptr, s1, i + 2);
	return (str_ptr);
}
