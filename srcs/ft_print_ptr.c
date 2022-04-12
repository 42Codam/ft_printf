/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 19:59:50 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/12 01:39:35 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_ptr(t_flags *tab)
{
	unsigned long	nb;
	const char		type = 'x';

	write(1, "0x", 2);
	tab->total_length += 2;
	nb = va_arg(tab->args, unsigned long);
	ft_converthexa(nb, type, tab);
}
