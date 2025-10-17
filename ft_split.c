/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:52:48 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/17 12:10:46 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *str, char del)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != del && (i == 0 || str[i - 1] == del))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len_w;
	size_t	words;
	char ** arr;

	words = count_words(s, c);
	arr = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL); // also need to free if allocation fails
	i = 0;
	while(i < words)
	{
		j = 0;
		while (s[i] == c)
			j++;
		while(s[i + j] != c)
			j++;
		arr[]
	}

}



// #include <stdio.h>
// int main()
// {
// 	char str[] = "  The moon and the stars ";
// 	printf("The word count is : %zu\n", count_words(str, ' '));

// 	return 0;
// }
