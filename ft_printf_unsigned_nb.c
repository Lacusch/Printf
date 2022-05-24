/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:33 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/24 15:44:46 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int ft_unsigned_len (unsigned int num)
{
	int i;

	i = 0;
	while (num != 0)
	{
	printf("%d\n", num);
	num = num / 10;
	printf("%d\n", num);
	i++;
	}
	return(i);
}
int	ft_printf_unsigned_nb(unsigned int nb)
{
	unsigned int number;

	number = nb;
	if (nb < 9)
		ft_putchar_fd(nb + '0', 1);
	else
	{
		ft_put_un_nbr_fd(nb / 10, 1);
		ft_putchar_fd((nb % 10) + 0, 1);
	}
	// printf ("%i",ft_unsigned_len(number));
	return (ft_unsigned_len(number));
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