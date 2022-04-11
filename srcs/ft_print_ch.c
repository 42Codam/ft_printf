/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ch.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 10:22:42 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 15:43:39 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_ch(t_flags *tab)
{
	int	c;

	c = va_arg(tab->args, int);
	write(1, &c, 1);
	tab->total_length += 1;
}
