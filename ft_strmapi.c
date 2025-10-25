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
	size_t	len;
	size_t	i;
	char	*mapped;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mapped = (char *)malloc(sizeof(char) * (len + 1));
	if (!mapped)
		return (NULL);
	mapped[len] = '\0';
	i = -1;
	while (s[++i])
		mapped[i] = f(i, s[i]);
	return (mapped);
}
