/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:09:37 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/24 12:15:42 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		newlst = (t_list *)malloc(sizeof(t_list));
		if (!newlst)
			//free function
		newlst->content = f(tmp->content);
	}
}
