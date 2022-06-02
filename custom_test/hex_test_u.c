/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_test_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:51:14 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/02 14:36:49 by slaszlo-         ###   ########.fr       */
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
	long h;
	h = 1406431375094;
	printf ("Base printf:\n");
	i1 = printf("%lx", h);
	printf("\n");
	printf ("The return value of printf is %i\n", i1);
	printf ("My printf:\n");
	i2 = ft_printf("%x", h);
	printf("\n");
	printf ("The return value of printf is %i\n", i2);
	return (0);
}
