/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:01:14 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 18:33:12 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned char	*str11;
	unsigned char	*str22;

	i = 0;
	str11 = (unsigned char *)str1;
	str22 = (unsigned char *)str2;
	while (n-- > 0)
	{
		if (str11[i] == str22[i])
			i++;
		else
			return (str11[i] - str22[i]);
	}
	return (0);
}
