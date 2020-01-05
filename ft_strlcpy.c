/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:30:08 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 19:26:00 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*s;

	if (!src)
		return (0);
	s = (char *)src;
	if (size == 0)
		return (ft_strlen(s));
	if (ft_strlen(s) == 0)
	{
		*dst = '\0';
		return (0);
	}
	i = 0;
	while (s[i] != '\0' && size - 1 > i)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(s));
}
