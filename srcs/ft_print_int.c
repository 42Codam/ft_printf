/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 11:06:46 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/29 15:29:14 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// strlen i normali ile degistir

void	ft_print_int(t_print *tab)
{
	int		nb;
	int		nb_len;
	char	*nb_str;

	nb = va_arg(tab->args, int);
	nb_str = ft_itoa(nb);
	if (!nb)
		write(1, "(null)", 1);
	nb_len = ft_strlen(nb_str);
	write(1, nb_str, nb_len);
	free(nb_str);
	tab->tl += nb_len;
}

