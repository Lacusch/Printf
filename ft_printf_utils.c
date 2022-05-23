/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:26:29 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/23 15:07:14 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "libftprintf.h"
#include "stdio.h"
int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_printf_str (char* str)
{
	if (str != NULL)
	{
		write (1, str, ft_strlen(str));
	}
	return(ft_strlen(str));
}

void	ft_put_hex(unsigned long number, char c, int fd)
{
	if (number < 10)
		ft_putnbr_fd(number, 1);
	else if (number <= 16 & c == 'x' || c == 'X')
		ft_putnbr_fd('a' + (number - 10), 1);
	else if (number <= 16 && c == 'X')
		ft_putnbr_fd('A' + (number - 10), 1);
	else
	{
		ft_put_hex(number / 16, c, fd);
		ft_put_hex(number % 16, c, fd);
	}
}