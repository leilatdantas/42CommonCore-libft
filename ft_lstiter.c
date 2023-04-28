/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:35:41 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/28 12:39:43 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DEF: Iterates the list ’lst’ and applies the function ’f’ on the content of 
**  each node.
**  RETURN VALUE: None.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
