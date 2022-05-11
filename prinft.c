/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/11 14:35:10 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "libftprintf.h"


int ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;

	i = 0;
	
	va_start (list, s);
	while (s[i] != '\0')
	{
		if(s[i] == '%')
		{
			i++;
			ft_process_str(list, s[i]);
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
	}	
	va_end(list);
	return(0);
}
void ft_process_str(va_list list, char c)
{
	//Flags (Bonus)
	// if (c == '-' || c == '0')
	// {
	// 	//implement flags
	// }
	// if (c == Number)
	// 	print minimum characters
	if (c == 'c')
		ft_putchar_fd((char)va_arg(list, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(list, char*), 1);
	if (c == 'p')
	;	
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(list, int), 1);
	if (c == 'u')
		ft_put_un_nbr_fd(va_arg(list, unsigned int), 1);
	if (c == 'x')
	;
	if (c == 'X')
	;
	if (c == '%')
		ft_putchar_fd('%', 1);
}