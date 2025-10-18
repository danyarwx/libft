/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:35:45 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/18 21:17:07 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size); // REMOVE LATER

long long	count_len(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		count = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	char		temp;
	char		*str;
	long long	nn;

	nn = n;
	count = count_len(nn);
	str = (char *)ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (nn < 0)
	{
		nn = nn * (-1);
		str[0] = '-';
	}
	while (nn > 0)
	{
		str[--count] = (nn % 10) + '0';
		nn = nn / 10;
	}
	return (str);
}

////////////////////////////////////////////////////////////////////////////////

// #include <stdlib.h>

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	unsigned char	*ptr;
// 	size_t			i;

// 	ptr = (unsigned char *)malloc(nmemb * size);
// 	if (!ptr || nmemb == 0 || size == 0)
// 		return (NULL);
// 	i = 0;
// 	while (i < nmemb * size)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }

// void	test_itoa(int n)
// {
// 	char	*res;

// 	res = ft_itoa(n);
// 	if (!res)
// 	{
// 		printf("ft_itoa(%d) returned NULL\n", n);
// 		return ;
// 	}
// 	printf("ft_itoa(%d) = \"%s\"\n", n, res);
// 	free(res);
// }

// int	main(void)
// {
// 	printf("=== Testing ft_itoa ===\n");
// 	// 1️⃣ Basic numbers
// 	test_itoa(0);
// 	test_itoa(1);
// 	test_itoa(-1);
// 	test_itoa(42);
// 	test_itoa(-42);
// 	test_itoa(12345);
// 	test_itoa(-12345);
// 	// 2️⃣ Edge cases
// 	test_itoa(2147483647);  // INT_MAX
// 	test_itoa(-2147483648); // INT_MIN (watch for overflow)
// 	// 3️⃣ Larger / smaller values
// 	test_itoa(1000000000);
// 	test_itoa(-1000000000);
// 	printf("=== End of tests ===\n");
// 	return (0);
// }
