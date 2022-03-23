/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 10:41:47 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/27 16:39:30 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		converted;

	i = 0;
	sign = 1;
	converted = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(str[i]))
	{
		if (i >= 10 && sign == 1)
			return (-1);
		if (i >= 10 && sign == -1)
			return (0);
		converted = (str[i] - '0') + (converted * 10);
		i++;
	}
	return (converted * sign);
}
