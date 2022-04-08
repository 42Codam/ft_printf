/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/14 15:53:02 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 14:08:40 by rbulbul       ########   odam.nl         */
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
	int		width;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		total_length;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
	int		error;
}t_flags;

int	ft_printf(const char *format, ...);
int	ft_parse_type(t_flags *tab, const char type);
int	ft_print_ch(t_flags *tab);
int	ft_print_str(t_flags *tab);
int	ft_print_int(t_flags *tab);
int	ft_print_hex(const char type, t_flags *tab);

#endif