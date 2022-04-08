/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/03 12:52:51 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 13:36:48 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_converthexa(unsigned int nb, const char type, t_flags *tab)
{
	char			c;

	if (nb > 15)
		ft_converthexa(nb / 16, type, tab);
	nb = nb % 16;
	if (nb < 10)
		c = nb + '0';
	else
	{
		if (type == 'X')
			c = nb + 'A' - 10;
		else
			c = nb + 'a' - 10;
	}
	tab->total_length += 1;
	return (write(1, &c, 1));
}

int	ft_print_hex(const char type, t_flags *tab)
{
	unsigned int	nb;

	nb = va_arg(tab->args, unsigned int);
	return (ft_converthexa(nb, type, tab));
}
