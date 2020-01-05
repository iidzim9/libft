/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:55:45 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 19:57:27 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_find(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *str, char const *set)
{
	int i;
	int j;

	if (str == 0)
		return (NULL);
	if (set == 0)
		return ((char *)str);
	i = 0;
	j = ft_strlen((char *)str);
	while (str[i] != '\0' && ft_find(set, str[i]))
		i++;
	while (str[i] != '\0' && ft_find(set, str[j - 1]))
		j--;
	return (ft_substr(str, i, j - i));
}
