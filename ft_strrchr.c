/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:47:06 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/11 13:25:39 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	char	car;
	char	*str;

	str = (char *)s;
	car = (char)c;
	size = ft_strlen(str);
	if (c == 0)
		return (str + size);
	while (size > 0)
	{
		if (str[size - 1] == car)
			return (str + size - 1);
		size--;
	}
	return (NULL);
}
