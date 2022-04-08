/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ch.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 10:22:42 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 14:38:56 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_ch(t_flags *tab)
{
	int	c;

	c = (char)va_arg(tab->args, int);
	if (!c)
	{
		write(1, "(null)", 6);
		return (-1);
	}
	tab->total_length += 1;
	return (write(1, &c, 1));
}
