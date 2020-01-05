/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:36:47 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 13:26:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		car;
	unsigned char		*dest;
	unsigned char		*source;

	i = 0;
	car = (unsigned char)c;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dest && !source)
		return (0);
	while (n > i)
	{
		dest[i] = source[i];
		if (source[i] == car)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
