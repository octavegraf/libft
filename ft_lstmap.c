/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:41:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/19 15:45:16 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**ptr;
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew(f(lst->next));
	*ptr = new;
	temp = lst->next;
	ft_lstdelone(lst, del);
	lst = temp;
	while (lst)
	{
		ft_lstadd_back(ptr, ft_lstnew(f(lst)));
		temp = lst->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (new);
}
