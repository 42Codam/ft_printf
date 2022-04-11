/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:05:46 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 15:38:41 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags	*ft_initialise_tab(t_flags	*flags)
{
	flags->width = 0;
	flags->prc = 0;
	flags->zero = 0;
	flags->pnt = 0;
	flags->sign = 0;
	flags->total_length = 0;
	flags->zero = 0;
	flags->dash = 0;
	flags->sp = 0;
	flags->error = 0;
	return (flags);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_flags	*tab;

	tab = (t_flags *)malloc(sizeof(t_flags));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_parse_type(tab, format[i + 1]);
			i++;
			if (tab->error == -1)
			{
				write(1, "(null)", 1);
				return (-1);
			}
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}
	va_end(tab->args);
	ret += tab->total_length;
	free(tab);
	return (ret);
}
