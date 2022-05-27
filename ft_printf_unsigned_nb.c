/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:33 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/27 13:04:32 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

// int ft_unsigned_len (unsigned int num)
// {
// 	int i;

// 	i = 0;
// 	while (num != 0)
// 	{
// 	num = num / 10;
// 	i++;
// 	}
// 	return(i);
// }
int	ft_printf_unsigned_nb(unsigned int nb)
{
	int	lenght;

	lenght = 0;

	if (nb < 9)
	{
		ft_putchar_fd(nb + '0', 1);
		lenght += 1;
	}
	else
	{
		ft_printf_unsigned_nb(nb / 10);
		ft_putchar_fd((nb % 10) + 0, 1);
		lenght += 1;
	}
	// printf ("%i",ft_unsigned_len(number));
	return (lenght);
}

// int main ()
// {
// 	unsigned int number;
// 	number = 224;
// 	int i;
// 	i =	ft_printf_unsigned_nb(number);
// 	// printf("%d", i);
// 	return (0);
// }