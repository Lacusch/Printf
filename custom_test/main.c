/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:11:05 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/30 16:27:49 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"
// int ft_number_digit (unsigned int number);

int main (void)
{
	// int i, i2, i3;
	// i = 178;
	// i2 = 0;
	// i3 = 0;
	// // printf("The number in hex is: ");
	// i2 = printf("%X", i);
	// printf("\nThe return value of printf is : %d", i2);
	// i3 = ft_printf("%X", i);
	// printf("\nThe return value of My printf is : %d", i3);
	// ft_printf("%X\n",i);
	// // printf("%x", i);
	// // write_hex(i);
	// // printf("\n%d", ft_count_hex(i));
	// // ft_printf("My function writes :");
	// // write_hex(i);
	// return (1);

	int i1, i2;
	unsigned int u;
	u = 987654;
	printf ("Base printf\n");
	i1 = printf ("%u", u);
	printf ("\n");
	printf ("The return value of printf is %i\n", i1);
	i2 = printf ("My printf\n");
	ft_printf ("%u", u);
	printf ("\nThe return value of My printf is %i\n", i2);

	// int i1, i2;
	// i1 = ft_printf("%i", i);
	// i2 = printf("%i", i);
	// // printf ("The return of ft_printf is:%i\n", i1);
	// // printf("\nThe return value of My printf is : %i", i1);
	// printf ("The return of printf is:%i\n", i2);
	return (0);
}

// int ft_number_digit (unsigned int number)
// {
// 	int i;
// 	while (number != 0)
// 	{
// 		number = number /10;
// 		i++;
// 	}
// 	return (i);
// }
// unsigned int u;
// u = 35798;
// ft_printf("%d", ft_number_digit(u));