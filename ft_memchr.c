/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejacque <sejacque@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:39:49 by sejacque          #+#    #+#             */
/*   Updated: 2026/10/21 00:39:50 by sejacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;
	size_t				i;

	p = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
