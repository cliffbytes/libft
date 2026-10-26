/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejacque <sejacque@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:40:24 by sejacque          #+#    #+#             */
/*   Updated: 2026/10/21 00:40:26 by sejacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	i;

	ch = (char)c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != ch)
		i--;
	if (s[i] == ch)
		return ((char *)s + i);
	return (NULL);
}
