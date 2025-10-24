/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:04:56 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/24 11:16:27 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*myStr;

	myStr = (t_list *)malloc(sizeof(t_list));
	if (!myStr)
		return (NULL);
	myStr->content = content;
	myStr->next = NULL;
	return (myStr);
}
