/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:52:48 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/18 20:06:22 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	unsigned char	*ptr;
// 	size_t			i;

// 	ptr = (unsigned char *)malloc(nmemb * size);
// 	if (ptr == NULL || nmemb == 0 || size == 0)
// 		return (ptr);
// 	i = 0;
// 	while (i < nmemb * size)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	n;
// 	size_t	i;
// 	char	*ptr;

// 	n = ft_strlen(s);
// 	if (start >= n || !s)
// 		return (NULL);
// 	n += start;
// 	if (len > n)
// 		len = n;
// 	ptr = (char *)ft_calloc(len + 1, sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		ptr[i] = s[start + i];
// 		i++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }

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

void	*ft_free(char **arr, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;
	char	**arr;

	words = count_words(s, c);
	arr = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL); // also need to free if allocation fails or if words = 0?
	i = 0;
	while (i < words)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		while (s[j] != c)
			j++;
		arr[i] = ft_substr(s, 0, j);
		if (!arr[i])
			return (ft_free(arr, i));
		i++;
		s += j;
	}
	return (arr);
}

// // Helper function to print and free the result of ft_split
// void	test_split(char *s, char c)
// {
// 	char **result;
// 	int i = 0;

// 	printf("\nInput: \"%s\" | Delimiter: '%c'\n", s, c);
// 	result = ft_split(s, c);
// 	if (!result)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return ;
// 	}

// 	while (result[i])
// 	{
// 		printf("  [%d] \"%s\"\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("→ Total words: %d\n", i);
// }

// int	main(void)
// {
// 	printf("=== Testing ft_split ===\n");

// 	// 1️⃣ Normal string
// 	test_split("Hello 42 Heilbronn Piscine", ' ');

// 	// 2️⃣ Multiple consecutive delimiters
// 	test_split("Hello   42   Piscine", ' ');

// 	// 3️⃣ Delimiter at start
// 	test_split("   Leading spaces", ' ');

// 	// 4️⃣ Delimiter at end
// 	test_split("Trailing spaces   ", ' ');

// 	// 5️⃣ Delimiters at both ends
// 	test_split("   Both sides   ", ' ');

// 	// 6️⃣ Only delimiters
// 	test_split("     ", ' ');

// 	// 7️⃣ Empty string
// 	test_split("", ' ');

// 	// 8️⃣ String without any delimiters
// 	test_split("NoDelimitersHere", ' ');

// 	// 9️⃣ Delimiter is a non-space character
// 	test_split("apple,banana,,cherry", ',');

// 	// 🔟 Delimiter is a character not present in the string
// 	test_split("HelloWorld", ',');

// 	printf("\n=== End of tests ===\n");
// 	return (0);
// }
