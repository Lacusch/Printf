/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:16:06 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/25 09:51:55 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)

{
	char	*p;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	p = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (i < ft_strlen(s1))
		{
			p[i] = s1[i];
			i++;
		}
		p[i] = s2[i2];
		i++;
		i2++;
	}
	return (p);
}
