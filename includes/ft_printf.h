/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/14 15:53:02 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/12 02:45:58 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		total_length;
	int		error;
}t_flags;

int			ft_printf(const char *format, ...);
void		ft_parse_type(t_flags *tab, const char type);
void		ft_print_ch(t_flags *tab);
void		ft_print_str(t_flags *tab);
void		ft_print_int(t_flags *tab);
void		ft_print_hex(const char type, t_flags *tab);
void		ft_print_unint(t_flags *tab);
void		ft_print_ptr(t_flags *tab);
int			ft_converthexa(unsigned long nb, const char type, t_flags *tab);

#endif