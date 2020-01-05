/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:14:55 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 13:44:43 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	car;

	car = (unsigned char)c;
	i = 0;
	ptr = (unsigned char*)str;
	while (n-- > 0)
	{
		if (ptr[i] != car)
			i++;
		else
			return (ptr + i);
	}
	return (NULL);
}
