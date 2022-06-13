/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:33 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/13 07:00:02 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>


int ft_number_digit (long number)
{
	int i;
	if (number < 0)
		i = 1;
	else
		i = 0;
	if (number == 0)
		return(1);
	if (number < 0)
		number = number *(-1);
	while (number != 0)
	{
		number = number /10;
		i++;
	}
	return (i);
}

int	ft_printf_unsigned_nb(unsigned int nb, int call_count)
{
	int ret;
	if (call_count == 1 && nb == 0)
		ft_putstr_fd("0", 1);
	ret = ft_number_digit(nb);
	if (nb != 0)
	{
		ft_printf_unsigned_nb(nb / 10, call_count + 1);
		ft_putchar_fd((nb % 10) + '0', 1);
	}

		
	return ft_number_digit(nb);
}

int	ft_printf_signed_nb(long nb)
{
	int ret;
	ret = ft_number_digit(nb);
	if (nb == 0)
		ft_putnbr_fd(0, 1);
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar_fd('-', 1);
	}
	if (nb != 0)
	{
		ft_printf_unsigned_nb(nb / 10, 2);
		ft_putchar_fd((nb % 10) + '0', 1);
	}
	return (ret);
}