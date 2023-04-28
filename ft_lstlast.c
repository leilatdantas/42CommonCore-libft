/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:51:40 by lebarbos          #+#    #+#             */
/*   Updated: 2023/04/28 11:05:01 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DEF: Returns the last node of the list.
**  RETURN VALUE: Last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
