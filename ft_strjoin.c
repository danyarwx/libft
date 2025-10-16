/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:04:19 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/16 19:21:54 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
		ptr[i++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		ptr[i + len1] = s2[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
