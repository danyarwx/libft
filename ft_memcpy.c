/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:09:28 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/14 15:54:10 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		*ptr_d;
	int					i;

	if (dest == src || n == 0)
		return (dest);
	ptr_s = (const unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dest);
}

// #include <unistd.h>
// int main(void)
// {
// 	char str[] = "hello";
// 	// char str2[] = "world";
// 	char *str2 = str;

// 	ft_memcpy(str, str2, 5);

// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, (str + i), 1);
// 		i++;
// 	}

// 	return (0);
// }
