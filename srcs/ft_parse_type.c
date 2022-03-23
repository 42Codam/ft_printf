/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_type.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 19:39:31 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/23 15:43:21 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"
#include <stdio.h>

int	ft_parse_type(t_print *tab, const char type, int index)
{
	if (type == 'c')
		ft_print_ch(tab);
	return (index + 1);
}

