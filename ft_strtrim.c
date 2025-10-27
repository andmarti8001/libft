/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:15:00 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 16:05:32 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = (char *)(s1 + ft_strlen(s1));
	while (end > s1 && ft_strchr(set, *(end - 1)))
		end--;
	return (ft_substr(s1, 0, end - s1));
}
