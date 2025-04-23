/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:41:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/22 18:08:35 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**ptr;
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew(f(lst->content));
	ptr = NULL;
	*ptr = new;
	temp = lst->next;
	ft_lstdelone(lst, del);
	lst = temp;
	while (lst)
	{
		ft_lstadd_back(ptr, ft_lstnew(f(lst->content)));
		temp = lst->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (new);
}
