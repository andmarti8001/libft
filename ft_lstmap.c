/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:35:59 by andmarti          #+#    #+#             */
/*   Updated: 2025/10/08 21:47:04 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	void	*m_node;

	if (!lst || !f || !del)
		return (NULL);
	mapped = NULL;
	while (lst)
	{
		m_node = f(lst->content);
		if (!m_node)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&mapped, ft_lstnew(m_node));
		}
		lst = lst->next;
	}
	return (mapped);
}
