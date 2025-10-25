/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:30:29 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/25 03:33:54 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*callocced;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	callocced = malloc(count * size);
	if (!callocced)
		return (NULL);
	ft_bzero(callocced, count * size);
	return (callocced);
}
