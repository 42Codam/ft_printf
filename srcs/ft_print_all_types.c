/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_all_types.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/24 09:17:10 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 15:34:43 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_all_type(t_print *tab)
{
	char	*new_str;
	int		s_len;

	new_str = tab->str;
	printf("%s\n",new_str);
	s_len = strlen(tab->str);
	tab->tl += s_len;
}
