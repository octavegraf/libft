/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:41:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/28 13:42:49 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;

	ft_lstiter(lst, (*f)(lst->content));
	ft_lstdelone(lst, del);
	*new = ft_lstnew(lst->content);
	while (lst->next)
	{
		ft_lstadd_back(new, lst);
		lst = lst->next;
	}
	return ((*new));
}
