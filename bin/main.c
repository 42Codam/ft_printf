/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 12:51:25 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/11 19:13:26 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	unsigned int i;

	i = 0;
	// Hexadecimal value
	printf("%d\n", printf("%s", "hello"));
	// printf("%d\n", printf("%X\n", 1515));
	ft_printf("%p\n", (void *)&i);
	printf("%p\n", (void *)&i);
	// ft_printf("%d\n", ft_printf("%X\n", 1515));
	// system("leaks test");
	ft_printf("%%%dfg\n".i);
	return (0);
}
