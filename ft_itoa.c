/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejacque <sejacque@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:43:08 by sejacque          #+#    #+#             */
/*   Updated: 2026/10/26 15:22:52 by sejacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*str;

	number = n;
	len = ft_numlen(number);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (number < 0)
		number = -number;
	while (len > 0)
	{
		str[--len] = number % 10 + '0';
		number /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
