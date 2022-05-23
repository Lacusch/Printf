/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:09 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/23 16:15:15 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
// ft_printf.c
int	ft_printf(const char *s, ...);

//ft_printf_utils.c
int	ft_printf_char(int c);
int ft_printf_str (char* str);
int	ft_printf_unsigned_nb(unsigned int nb);

void	ft_put_hex(unsigned long number, char c, int fd);
#endif