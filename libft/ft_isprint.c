/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/31 13:35:23 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 14:37:59 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// The first 32 characters in the ASCII-table are unprintable

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
