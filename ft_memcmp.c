/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:10:12 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 12:16:01 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*one;
	const unsigned char	*two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while (n)
	{
		if (*one != *two)
			return ((int)(*one - *two));
		one++;
		two++;
		n--;
	}
	return (0);
}
