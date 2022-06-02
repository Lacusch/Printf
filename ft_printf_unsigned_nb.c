/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:33 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/02 14:17:45 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>


int ft_number_digit (long number)
{
	int i;
	i = 0;
	if (number < 0)
		number = number *(-1);
	while (number != 0)
	{
		number = number /10;
		i++;
	}
	return (i);
}

int	ft_printf_unsigned_nb(unsigned int nb)
{
	int ret;
	ret = ft_number_digit(nb);

	if (nb != 0)
	{
		ft_printf_unsigned_nb(nb / 10);
		ft_putchar_fd((nb % 10) + '0', 1);
	}
	return (ret);
}

int	ft_printf_signed_nb(int nb)
{
	
	int ret;
	ret = ft_number_digit(nb);

	if (nb < 0)
		nb = nb * (-1);
	if (nb != 0)
	{
		ft_printf_unsigned_nb(nb / 10);
		ft_putchar_fd((nb % 10) + '0', 1);
	}
	return (ret);
}