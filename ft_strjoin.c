/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:04:19 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/22 17:10:21 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	ptr = (char *)malloc((len1 + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		ptr[i + len1] = s2[i];
		i++;
	}
	ptr[i + len1] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *s1 = "my favorite animal is";
// 	char *s2 = " ";
// 	char *s3 = "the nyancat";
// 	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

// 		i++;
// 	if (!strcmp(res, "my favorite animal is the nyancat"))
// 		printf("Success!");
// 	printf("\n\nFailure!\nThe string is: %s", res);

// 	return (0);
// }

// #include <stdlib.h>

// void	*ft_calloc(size_t nmemb,
// 		i++;size_t size)
// {
// 	unsigned char	*ptr;
// 	size_t			i;

// 	ptr = (unsigned char *)malloc(nmemb * size);
// 	if (!ptr)#include <stdlib.h>

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 		i++;
// 	unsigned char	*ptr;
// 	size_t			i;

// 	ptr = (unsigned char *)malloc(nmemb * size);
// 	if (!ptr)
// 		return (NULL);
// 	i = 0;
// 	while (i < nmemb * size)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }
// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 	{
// 		count++;
// 	}
// 	return (count);
// }
// 		return (NULL);
// 	i = 0;
// 	while (i < nmemb * size)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }
// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 	{
// 		count++;
// 	}
// 	return (count);
// }
