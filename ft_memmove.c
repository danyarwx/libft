/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:33:26 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/13 19:26:15 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_d = (unsigned char *)dest;
	ptr_s = (const unsigned char *)src;
	if (dest == src || n == 0)
	return (dest);
	unsigned char		temp[n];
	i = 0;
	while (i < n)
	{
		temp[i] = ptr_s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_d[i] = temp[i];
		i++;
	}
	return (dest);
}

