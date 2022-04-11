/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/03 12:52:51 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/11 19:18:42 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_converthexa(unsigned long nb, const char type, t_flags *tab)
{
	char			c;

	if (nb > 15)
		ft_converthexa(nb / 16, type, tab);
	nb = nb % 16;
	if (nb < 10)
		c = nb + '0';
	else
	{
		if (type == 'x')
			c = nb + 'a' - 10;
		else
			c = nb + 'A' - 10;
	}
	tab->total_length += 1;
	return (write(1, &c, 1));
}

void	ft_print_hex(const char type, t_flags *tab)
{
	unsigned long	nb;

	nb = va_arg(tab->args, unsigned long);
	ft_converthexa(nb, type, tab);
}
