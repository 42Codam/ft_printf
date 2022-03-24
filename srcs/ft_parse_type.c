/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_type.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 19:39:31 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 15:08:25 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_parse_type(t_print *tab, const char type, int index)
{
	if (type == 'c')
		ft_print_ch(tab);
	else if (type == 's')
		ft_print_str(tab);
	// else if (type == 'i' || type == 'd')
	// 	ft_print_int(tab);
	return (index + 1);
}
