/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 16:57:37 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/12 02:09:26 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// strlen wil be used in order to add lenght to tab->tl
// Use putchar in whileloop
// va_arg(tab->args, char)
// use or changed the library functions to libft
#include "../includes/ft_printf.h"

void	ft_print_str(t_flags *tab)
{
	char	*str;
	int		str_len;

	str = va_arg(tab->args, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		tab->total_length = 6;
		return ;
	}
	str_len = ft_strlen(str);
	write(1, str, str_len);
	tab->total_length += str_len;
}
