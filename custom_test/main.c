/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:11:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/30 15:41:00 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"
// int count_hex (int number);
// int write_hex (int number);

// int count_hex (int number)
// {
// 	int lenght;
// 	lenght = 0;
// 	while (number !=0)
// 	{	

// 		number = number /16;
// 		lenght++;
// 	}
// 	return (lenght);
// }

// int write_hex (int number)
// {
// 	int lenght;
// 	lenght = 0;
// 	if (number < 10)
// 	{
// 		ft_putchar_fd(number + '0', 1);
// 		lenght ++;
// 	}
// 	else if (number <=16)
// 	{
// 		ft_putchar_fd('a' + (number -10), 1);
// 		lenght++;
// 	}
// 	else
// 	{
// 		write_hex(number /16);
// 		write_hex(number %16);
// 	}
// 	return (count_hex(number));
// }
int main (void)
{
	int i, i2, i3;
	i = 178;
	i2 = 0;
	i3 = 0;
	// printf("The number in hex is: ");
	i2 = printf("%X", i);
	printf("\nThe return value of printf is : %d", i2);
	i3 = ft_printf("%X", i);
	printf("\nThe return value of My printf is : %d", i3);
	ft_printf("%X\n",i);
	// printf("%x", i);
	// write_hex(i);
	// printf("\n%d", ft_count_hex(i));
	// ft_printf("My function writes :");
	// write_hex(i);
	return (1);
}
