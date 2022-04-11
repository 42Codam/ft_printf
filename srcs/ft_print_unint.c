/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_unint.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 15:05:06 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/08 16:07:00 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	check_length(unsigned int usnb )
{
	int	i;

	i = 0;
	while (usnb != 0)
	{
		usnb /= 10;
		i++;
	}
	return (i);
}

static char	*ft_utoa(unsigned int usnb)
{
	unsigned int	usnb_length;
	char			*char_usnb;

	if (usnb == 0)
		return (ft_strdup("0"));
	usnb_length = check_length(usnb);
	char_usnb = malloc(sizeof(char) * usnb_length + 1);
	if (!char_usnb)
		return (NULL);
	char_usnb[usnb_length] = '\0';
	while (usnb > 0)
	{
		char_usnb[usnb_length - 1] = (usnb % 10) + '0';
		usnb /= 10;
		usnb_length--;
	}
	return (char_usnb);
}

void	ft_print_unint(t_flags *tab)
{
	unsigned int	usnb;
	int				usnb_len;
	char			*usnb_str;

	usnb = va_arg(tab->args, unsigned int);
	usnb_str = ft_utoa(usnb);
	if (!usnb_str)
	{
		tab->error = -1;
		return ;
	}
	usnb_len = ft_strlen(usnb_str);
	write(1, usnb_str, usnb_len);
	tab->total_length += usnb_len;
	free(usnb_str);
}
