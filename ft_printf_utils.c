/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:26:29 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/02 15:01:34 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_printf_str (char* str)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
		// return (0);
	}
	else
	{
		write (1, str, ft_strlen(str));
	}
	return(ft_strlen(str));
}

int ft_count_hex (long number)
{
	int lenght;
	lenght = 0;
	while (number !=0)
	{	

		number = number /16;
		lenght++;
	}
	return (lenght);
}

int ft_write_hex (unsigned long number, char c)
{
	int lenght;
	lenght = 0;
	if (number < 10)
	{
		ft_putchar_fd(number + '0', 1);
		lenght ++;
	}
	else if (number <16 && c == 'x')
	{
		ft_putchar_fd('a' + (number -10), 1);
		lenght++;
	}
	else if (number <16 && c == 'X')
	{
		ft_putchar_fd('A' + (number -10), 1);
		lenght++;
	}
	else
	{
		ft_write_hex(number /16, c);
		ft_write_hex(number %16, c);
	}
	return (ft_count_hex(number));
}

// void	ft_put_hex(unsigned long number, char c, int fd)
// {
// 	if (number < 10)
// 		ft_putnbr_fd(number, 1);
// 	else if (number <= 16 & c == 'x')
// 		ft_putnbr_fd('a' + (number - 10), 1);
// 	else if (number <= 16 && c == 'X')
// 		ft_putnbr_fd('A' + (number - 10), 1);
// 	else
// 	{
// 		ft_put_hex(number / 16, c, fd);
// 		ft_put_hex(number % 16, c, fd);
// 	}
// }