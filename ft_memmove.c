/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 03:23:12 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 10:25:52 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*d;
	const unsigned char			*s;

	if (dst <= src || dst >= src + len)
		return (ft_memcpy(dst, src, len));
	d = (unsigned char *)dst + len - 1;
	s = (const unsigned char *)src + len - 1;
	while (len)
	{
		*d-- = *s--;
		len--;
	}
	return (dst);
}

