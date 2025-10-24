/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:41:37 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/24 11:47:08 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	if (!(*lst))
		*lst = new;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
