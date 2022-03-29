/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 16:57:37 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/29 14:03:06 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// strlen wil be used in order to add lenght to tab->tl
// Use putchar in whileloop
// va_arg(tab->args, char)
// use or changed the library functions to libft
#include "../includes/ft_printf.h"

void	ft_print_str(t_print *tab)
{
	char	*str;
	int		s_len;

	str = va_arg(tab->args, char *);
	s_len = strlen(str);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	tab->tl += s_len;
}
