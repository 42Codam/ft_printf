/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:05:46 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/29 13:24:15 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
// cspdiuxX%

t_print	*ft_initialise_tab(t_print	*tab)
{
	tab->wdt = 0;
	tab->str = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_parse_type(tab, format[i + 1], i + 1);
		else
		{
			ret += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(tab->args);
	ret += tab->tl;
	free(tab);
	return (ret);
}

