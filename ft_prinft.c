/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/27 16:49:19 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include "stdio.h"

int	ft_process_str(va_list ap, char c)
{
	int		lenght;

	lenght = 0;
	if (c == 'c')
		lenght += ft_printf_char((char)va_arg(ap, int));
	if (c == 's')
		lenght += ft_printf_str(va_arg(ap, char *));
	if (c == 'p')
		lenght += ft_write_point(va_arg(ap, unsigned long), 0);
	if (c == 'd' || c == 'i')
		lenght += ft_printf_signed_nb(va_arg(ap, int));
	if (c == 'u')
		lenght += ft_printf_unsigned_nb(va_arg(ap, unsigned int), 1);
	if (c == 'x')
		lenght += ft_write_hex(va_arg(ap, unsigned long), 'x');
	if (c == 'X')
		lenght += ft_write_hex(va_arg(ap, unsigned long), 'X');
	if (c == '%')
	{
		lenght += ft_putchar_fd('%', 1);
	}
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
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			c += ft_process_str(ap, s[i + 1]);
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
