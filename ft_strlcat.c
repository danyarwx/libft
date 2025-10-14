/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:40:35 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/14 16:09:25 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (dst_size >= len_s + len_d + 1)
	{
		ft_memcopy(dest + len_d, src, len_s + 1);
	}
	else if (dst_size != len_d)
	{
		ft_memcopy(dest + len_d, src, dst_size - len_d - 1);
		dest[dst_size - 1] = '\0';
	}
	return (len_d + len_s);
}
