/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:45:50 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/23 00:47:16 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*start;

	start = s;
	if (!s || !f)
		return ;
	while (*s)
	{
		f(s - start, s);
		s++;
	}
}
