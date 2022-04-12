/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:05:46 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/12 02:45:51 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags	*ft_initialise_tab(t_flags	*flags)
{
	flags->total_length = 0;
	flags->error = 0;
	return (flags);
}

static int	write_format(const char *format, t_flags *tab)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_parse_type(tab, format[i + 1]);
			i++;
			if (tab->error == -1)
				return (-1);
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		ret;
	t_flags	*tab;

	tab = (t_flags *)malloc(sizeof(t_flags));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	ret = write_format(format, tab);
	va_end(tab->args);
	ret += tab->total_length;
	free(tab);
	return (ret);
}
