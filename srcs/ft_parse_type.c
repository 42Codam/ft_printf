/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_type.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 19:39:31 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/11 18:59:42 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_parse_type(t_flags *tab, const char type)
{
	if (type == 'c')
		ft_print_ch(tab);
	else if (type == 's')
		ft_print_str(tab);
	else if (type == 'i' || type == 'd')
		ft_print_int(tab);
	else if (type == 'u')
		ft_print_unint(tab);
	else if (type == 'x' || type == 'X')
		ft_print_hex(type, tab);
	else if (type == 'p')
		ft_print_ptr(tab);
	else if (type == '%')
	{
		tab->total_length += 1;
		write(1, &type, 1);
	}
}
