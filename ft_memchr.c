/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:16:31 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 12:18:47 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*i;

	i = (unsigned char *)s;
	while (n)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		i++;
		n--;
	}
	return (NULL);
}
