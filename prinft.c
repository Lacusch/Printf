/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/10 16:01:58 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
			if (s[i] == 'c')
			{
			
			}
			if (s[i] == '%')
				write(1, '%', 1);
		}
	}
	va_end(list);
}
