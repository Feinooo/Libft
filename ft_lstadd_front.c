/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:50 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/06 21:33:32 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew("b");
// 	new = ft_lstnew("a");
// 	ft_lstadd_front(&list, new);
// 	printf("%s\n", (char *) list->content);
// 	printf("%s\n", (char *) list->next->content);
// 	free(list->next);
// 	free(list);
// }
