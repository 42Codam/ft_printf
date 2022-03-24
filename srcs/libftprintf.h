/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/14 15:53:02 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/24 14:57:18 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	char	*str;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
}t_print;

int		ft_printf(const char *format, ...);
int		ft_parse_type(t_print *tab, const char type, int index);
void	ft_print_ch(t_print *tab);
void	ft_print_str(t_print *tab);
void	ft_print_int(t_print *tab);
void	ft_print_all_type(t_print *tab);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dssize);
size_t	ft_strlen(const char *s);


#endif