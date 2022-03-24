/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 11:06:46 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 15:01:44 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
// strlen i normali ile degistir
void	ft_print_int(t_print *tab)
{
	int		nb;
	char	*nb_str;

	nb = va_arg(tab->args, int);
	nb_str = ft_itoa(nb);
	if (!nb)
	{
		write(1, "(null)", 1);
	}
	tab->str = nb_str;
	ft_print_all_type(tab);
	tab->tl += strlen(nb_str);
	free(nb_str);
}
