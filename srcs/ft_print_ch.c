/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ch.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 10:22:42 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 12:00:29 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_ch(t_print *tab)
{
	int	c;

	c = (char)va_arg(tab->args, int);
	write(1, &c, 1);
	tab->tl += 1;
}
