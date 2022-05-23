/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/23 15:05:18 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "libftprintf.h"
#include "stdio.h"

int	ft_process_str(va_list ap, char c)
{
	int		lenght;

	lenght = 0;
	if (c == 'c')
		lenght += ft_printf_char((char)va_arg(ap, int));
	if (c == 's')
		lenght += ft_printf_str(va_arg (ap, char*));
		// ft_putstr_fd(va_arg (ap, char*), 1);
	if (c == 'p' || c == 'x' || c == 'X')
	{
		// ft_putstr_fd("0x", 1);
		// ft_put_hex(va_arg(ap, unsigned long), c, 1);
	}
	if (c == 'd' || c == 'i')
		// ft_putnbr_fd(va_arg(ap, int), 1);
	if (c == 'u')
		// ft_put_un_nbr_fd(va_arg(ap, unsigned int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
	return (lenght);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		c;

	c = 0;
	i = 0;
	va_start (ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			c += ft_process_str(ap, s[i+1]);	
			i += 2;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
			c++;
		}
	}	
	va_end(ap);
	return (c);
}
