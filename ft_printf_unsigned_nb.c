/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:33 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/23 15:52:23 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_unsigned_len (unsigned int num)
{
	int i;

	i = 0;
	while (num != 0)
	{
	i++;
	num = num / 10;
	}
	return(i);
}

int	ft_printf_unsigned_nb(unsigned int nb)
{
	unsigned int number;

	number = nb;
	if (nb < 9)
		ft_putchar_fd(nb + '0', 1);
	else
	{
		ft_put_un_nbr_fd(nb / 10);
		ft_putchar_fd((nb % 10) + 0, 1);
	}
	return (ft_unsigned_len(number));
}