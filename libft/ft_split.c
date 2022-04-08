/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/27 20:29:05 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/23 15:59:36 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	char	last;
	int		i;
	int		j;

	last = c;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (last == c && s[i] != c)
			j++;
		last = s[i];
		i++;
	}
	return (j);
}

static char	*create_words(char const *s, char c)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	while (s)
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			sub_s = malloc(sizeof(char) * (i + 2));
			ft_strlcpy(sub_s, s, i + 2);
			return (sub_s);
		}
		i++;
	}
	return (0);
}

static char	**free_arr(char **arr, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		arr_index;
	int		i;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	arr_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		arr[arr_index] = create_words(&s[i], c);
		if (!arr[arr_index])
			return (free_arr(arr, arr_index));
		i += ft_strlen(arr[arr_index]);
		arr_index++;
	}
	arr[arr_index] = NULL;
	return (arr);
}
