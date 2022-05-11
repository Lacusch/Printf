/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un_nbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:07:01 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/11 13:13:47 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_put_un_nbr_fd(unsigned int n, int fd)
{
	if (nb < 9)
		ft_putchar_fd(nb + '0', 1);
	ft_put_un_nbr_fd(n / 10, fd);
	ft_putchar_fd((nb % 10) + 0, fd);
}