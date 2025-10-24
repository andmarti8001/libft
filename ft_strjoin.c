/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:02:05 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 14:11:27 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinned;
	size_t	dstsize;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	joinned = ft_calloc(dstsize, sizeof(char));
	if (!joinned)
		return (NULL);
	ft_strlcpy(joinned, s1, dstsize);
	ft_strlcat(joinned, s2, dstsize);
	return (joinned);
}
