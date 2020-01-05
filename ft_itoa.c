/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:51:57 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/16 20:01:02 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		slen(long n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (len == 0)
		len = 1;
	return (len);
}

char			*ft_itoa(int c)
{
	char	*p;
	int		len;
	long	nbr;

	nbr = c;
	len = slen(c);
	if ((p = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	p[len--] = '\0';
	if (nbr == 0)
		p[0] = 48;
	if (nbr < 0)
	{
		p[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		p[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (p);
}
