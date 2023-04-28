/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:40:19 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/28 11:49:46 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DEF: Deletes and frees the given node and every successor of that node, 
**  using the function ’del’ and free(3).
**  RETURN VALUE: None.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	free(*lst);
}
