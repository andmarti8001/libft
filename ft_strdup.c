/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:01:33 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 11:08:19 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dupped;
	size_t	len;

	len = ft_strlen(s1);
	dupped = malloc(len + 1);
	if (!dupped)
		return (NULL);
	ft_strlcpy(dupped, s1, len + 1);
	return (dupped);
}
