/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 08:55:06 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 13:35:03 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d_len;
	const char	*s_start;

	d_len = ft_strlen(dst);
	s_start = src;
	if (d_len >= dstsize)
		return (ft_strlen(src) + dstsize);
	dst += d_len;
	dstsize -= d_len;
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	while (*src)
		src++;
	return ((size_t)(d_len + src - s_start));
}
