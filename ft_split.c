/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejacque <sejacque@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:44:13 by sejacque          #+#    #+#             */
/*   Updated: 2026/10/26 15:23:27 by sejacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			s += word_len(s, c);
		}
	}
	return (count);
}

static char	**free_array(char **array, size_t count)
{
	if (!array)
		return (NULL);
	while (count > 0)
		free(array[--count]);
	free(array);
	return (NULL);
}

static char	*ft_strndup(char const *s, size_t n)
{
	size_t	len;
	char	*copy;

	len = 0;
	while (len < n && s[len])
		len++;
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len);
	copy[len] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	count;
	size_t	i;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	words = malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		words[i] = ft_strndup(s, word_len(s, c));
		if (!words[i])
			return (free_array(words, i));
		s += ft_strlen(words[i++]);
	}
	words[i] = NULL;
	return (words);
}
