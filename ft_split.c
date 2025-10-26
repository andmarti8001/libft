/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:26:29 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 15:47:25 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

size_t	get_word_count(char const *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wc += 1;
			i += word_len(&s[i], c) - 1;
		}
		i++;
	}
	return (wc);
}

char	*get_next_word(char const *s, char c, size_t *t)
{
	size_t	i;
	size_t	len;
	char	*next_word;

	while (s[*t] == c && s[*t])
		*t += 1;
	len = word_len(&s[*t], c);
	next_word = malloc(sizeof(char) * (len + 1));
	if (!next_word)
		return (NULL);
	next_word[len] = '\0';
	i = -1;
	while (++i < len)
		next_word[i] = s[*t + i];
	*t += len;
	return (next_word);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	wc;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	wc = get_word_count(s, c);
	splitted = malloc(sizeof(char *) * (wc + 1));
	if (!splitted)
		return (NULL);
	splitted[wc] = (char *)0;
	i = -1;
	j = 0;
	while (++i < wc)
		splitted[i] = get_next_word(s, c, &j);
	return (splitted);
}
