/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:18:53 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/06/02 14:19:06 by slaszlo-         ###   ########.fr       */
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
	int u;
	u = -87654;
	printf ("Base printf\n");
	i1 = printf ("%u", u);
	printf ("\n");
	printf ("The return value of printf is %i\n", i1);
	printf ("My printf\n");
	i2 = ft_printf ("%u", u);
	printf ("\nThe return value of My printf is %i\n", i2);
	return (0);
}
