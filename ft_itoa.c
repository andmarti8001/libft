/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:59:16 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 15:43:27 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_itoa(char *str, long n, size_t *i)
{
	if (n < 0)
	{
		str[*i] = '-';
		*i += 1;
		n *= -1;
	}
	if (n >= 10)
		fill_itoa(str, n / 10, i);
	str[*i] = n % 10 + '0';
	*i += 1;
}

char		*ft_itoa(int n)
{
	size_t	i;
	char	itoaed[12];

	i = 0;
	fill_itoa(itoaed, (long)n, &i);
	itoaed[i] = '\0';
	return (ft_strdup(itoaed));
}
