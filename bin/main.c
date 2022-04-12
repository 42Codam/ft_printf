/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 12:51:25 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/04/12 02:49:07 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	char *i;
	char *str;
	
	str = "";
	i = NULL;
	/* 	
	Simple Conversion Management
	- Check each conversion without any flags 'cspdiuxX'
	- Try special cases like 0 or smallest int or empty string or null pointer
	- Try with multiple arguments/conversions
	- Try the various conversions in the middle of a sentence (with other char before or after)
	*/
	// printf("Original printf: %s\n", i);
	// ft_printf("Our ft_printf: %s\n", i);

	//printf("\n\n%d", printf("NULL %\n"));
	//ft_printf("\n\n%d", ft_printf("NULL %b\n"));
	return (0);
}
