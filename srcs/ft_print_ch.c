/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ch.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 10:22:42 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/23 15:44:09 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

void	ft_print_ch(t_print *tab)
{
	int	c;

	c = va_arg(tab->args, int);
	tab->tl += 1;
	write(1, &c, 1);
}
