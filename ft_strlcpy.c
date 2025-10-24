/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 08:32:21 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 13:20:21 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*i;

	i = src;
	if (dstsize)
	{
		while (*i && dstsize > 1)
		{
			*dst++ = *i++;
			dstsize--;
		}
		*dst = '\0';
	}
	while (*i)
		i++;
	return ((size_t)(i - src));
}
