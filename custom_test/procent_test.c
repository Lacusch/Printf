/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procent_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:57:06 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/01 16:57:32 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main (void)
{
	int i1, i2;
	printf ("Base printf:\n");
	i1 = printf("%%");
	printf("\n");
	printf ("The return value of printf is %i\n", i1);
	printf ("My printf:\n");
	i2 = ft_printf("%%");
	printf("\n");
	printf ("The return value of printf is %i\n", i2);
	return (0);
}