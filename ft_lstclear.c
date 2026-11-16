/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:49 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/08 15:59:57 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("b")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("c")));
// 	ft_lstclear(&list, free);
// 	printf("%p\n", (void *) list);
// }
