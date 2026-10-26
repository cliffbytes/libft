/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejacque <sejacque@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:40:02 by sejacque          #+#    #+#             */
/*   Updated: 2026/10/21 00:40:02 by sejacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	size_t	i;

	ch = (char)c;
	i = 0;
	while (s[i] && s[i] != ch)
		i++;
	if (s[i] == ch)
		return ((char *)s + i);
	return (NULL);
}
