/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:33:45 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 19:35:10 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	size;
	char	*ptr;
	char	*f;

	i = 0;
	ptr = (char *)str;
	f = (char *)to_find;
	if (*to_find == 0)
		return (ptr);
	if (!str && !len)
		return (NULL);
	size = ft_strlen(f);
	while (ptr[i] != '\0' && len >= i + size)
	{
		if (ft_strncmp(ptr + i, f, size) == 0)
			return (ptr + i);
		i++;
	}
	return (0);
}
