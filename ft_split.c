/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:42:20 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/26 16:55:55 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*get_next_word(const char **s, char c)
{
	const char	*s_ptr;
	char		*word;
	size_t		len;

	while (**s && **s == c)
		(*s)++;
	s_ptr = *s;
	while (*s_ptr && *s_ptr != c)
		s_ptr++;
	len = s_ptr - *s;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, *s, len + 1);
	*s = s_ptr;
	return (word);
}

static size_t	get_wc(const char *s, char c)
{
	size_t	wc;

	wc = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
			wc++;
		}
		else
			s++;
	}
	return (wc);
}

static void		free_split(char **splitted, size_t	i)
{
	while (i > 1)
		free(splitted[i-- - 1]);
	free(splitted);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	size_t	i;
	char	**splitted;

	if (!s)
		return (NULL);
	wc = get_wc(s, c);
	splitted = ft_calloc(wc + 1, sizeof(char *));
	if (!splitted)
		return (NULL);
	i = 0;
	while (i < wc)
	{
		splitted[i] = get_next_word(&s, c);
		if (!(splitted[i]))
		{
			free_split(splitted, i);
			return (NULL);
		}
		i++;
	}
	return (splitted);
}
