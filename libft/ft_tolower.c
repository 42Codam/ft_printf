/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 07:30:20 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/23 16:01:24 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if ('a' <= c && c <= 'z')
			return (c);
		else
			c = c + 32;
	}
	return (c);
}
