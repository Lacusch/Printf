/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hex_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:48:37 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/01 16:49:46 by slaszlo-         ###   ########.fr       */
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
	int h;
	h = 102;
	printf ("Base printf:\n");
	i1 = printf("%X", h);
	printf("\n");
	printf ("The return value of printf is %i\n", i1);
	printf ("My printf:\n");
	i2 = ft_printf("%X", h);
	printf("\n");
	printf ("The return value of printf is %i\n", i2);
	return (0);
}
