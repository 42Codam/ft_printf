/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/03 15:41:40 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/20 18:25:21 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_length(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		n_length;
	char	*char_n;
	long	nb;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	n_length = check_length(n);
	char_n = malloc(sizeof(char) * n_length + 1);
	if (!char_n)
		return (NULL);
	char_n[n_length] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		char_n[0] = '-';
	}
	while (nb > 0)
	{
		char_n[n_length - 1] = (nb % 10) + '0';
		nb /= 10;
		n_length--;
	}
	return (char_n);
}
