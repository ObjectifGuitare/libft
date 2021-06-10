/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:00:06 by spatez            #+#    #+#             */
/*   Updated: 2021/06/11 00:20:59 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*ptdr;

	if (!lst || !f)
		return (NULL);
	ptdr = NULL;
	while (lst)
	{
		dest = ft_lstnew(((t_list *)f(lst->content)));
		if (!dest)
		{
			if (del)
				ft_lstclear(&ptdr, del);
			else
				free(dest);
			return (NULL);
		}		
		ft_lstadd_back(&ptdr, dest);
		lst = lst->next;
	}
	return (ptdr);
}
