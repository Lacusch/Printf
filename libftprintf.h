/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:23:09 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/05/23 14:08:31 by slaszlo-         ###   ########.fr       */
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

void	ft_put_hex(unsigned long number, char c, int fd);
#endif