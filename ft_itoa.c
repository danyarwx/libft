/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:35:45 by dzhukov           #+#    #+#             */
/*   Updated: 2025/10/18 18:33:24 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;
	int	count;
	char *str;
	char c;


	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	str = (char *)ft_calloc(count + 1, sizeof(char));
	i = 0;
	while(n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	//reverse string


}
