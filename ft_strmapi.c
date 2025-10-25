/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:54:02 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 15:48:11 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	const char	*start;
	char		*mapped;

	if (!s || !f)
		return (NULL);
	start = s;
	len = ft_strlen(s);
	mapped = (char *)calloc(len + 1, sizeof(char));
	if (!mapped)
		return (NULL);
	while (*s)
	{
		*mapped++ = f(s - start, *s);
		s++;
	}
	return (mapped - len);
}
