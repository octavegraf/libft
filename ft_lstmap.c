/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:41:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/28 16:39:15 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	new = ft_lstnew((*f)(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
	}
	return (new);
}
