/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:42:08 by iidzim            #+#    #+#             */
/*   Updated: 2019/10/21 16:46:55 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list *nv_elt;

	nv_elt = malloc(sizeof(t_list));
	if (nv_elt == NULL)
		return (NULL);
	nv_elt->content = content;
	nv_elt->next = NULL;
	return (nv_elt);
}
