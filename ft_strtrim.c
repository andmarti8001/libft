/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:15:00 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 14:28:00 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_charset(char c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*trimmed;

	while (*s1 && is_charset(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = (char *)(s1 + ft_strlen(s1));
	while (end > s1 && is_charset(*(end - 1), set))
		end--;
	trimmed = malloc(end - s1 + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, end - s1 + 1);
	return (trimmed);	
}
