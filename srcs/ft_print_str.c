/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 16:57:37 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 15:29:43 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// strlen wil be used in order to add lenght to tab->tl
// Use putchar in whileloop
// va_arg(tab->args, char)
// use or changed the library functions to libft
#include "libftprintf.h"

void	ft_print_str(t_print *tab)
{
	char	*str;
	int		s_len;

	str = va_arg(tab->args, char *);
	tab->str = str;
	ft_print_all_type(tab);
	tab->tl += s_len;
}
