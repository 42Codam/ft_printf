/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 16:57:37 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 14:39:20 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// strlen wil be used in order to add lenght to tab->tl
// Use putchar in whileloop
// va_arg(tab->args, char)
// use or changed the library functions to libft
#include "../includes/ft_printf.h"

int	ft_print_str(t_flags *tab)
{
	char	*str;
	int		s_len;

	str = va_arg(tab->args, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		tab->error = -1;
		return (-1);
	}
	s_len = ft_strlen(str);
	tab->total_length += s_len;
	write(1, str, s_len);
	return (1);
}
