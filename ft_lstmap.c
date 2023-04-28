/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:40:44 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/28 14:32:47 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DEF: Iterates the list ’lst’ and applies the function ’f’ on the content 
**	of each node. Creates a new list resulting of the successive applications 
**	of the function ’f’. The ’del’ function is used to delete the content of 
**	a node if needed.
**	RETURN VALUE: The new list. NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (!lst)
		return (NULL);
	newlist = 0;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
