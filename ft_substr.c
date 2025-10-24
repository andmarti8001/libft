/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:01:02 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 14:01:07 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*subbed;

	if (!s)
		return (NULL);
	while (*s && start)
	{
		s++;
		start--;
	}
	if (start)
		return (ft_strdup(""));
	sub_len = ft_strlen(s);
	if (len < sub_len)
		sub_len = len;
	subbed = malloc(sub_len + 1);
	if (!subbed)
		return (NULL);
	ft_strlcpy(subbed, s, sub_len + 1);
	return (subbed);
}
