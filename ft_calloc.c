/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:30:29 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/24 19:10:40 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*callocced;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	callocced = malloc(total);
	if (!callocced)
		return (NULL);
	ft_bzero(callocced, count * size);
	return (callocced);
}
