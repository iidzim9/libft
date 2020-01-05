/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:42:09 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 13:32:43 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int				i;
	unsigned char	*s;
	unsigned char	*d;

	i = (int)len;
	if ((!dest && !src) || len == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
	{
		i--;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
		return (d);
	}
	return (ft_memcpy(dest, src, len));
}
