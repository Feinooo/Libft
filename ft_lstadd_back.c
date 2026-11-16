/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:51 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/08 15:35:34 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew("a");
// 	ft_lstadd_back(&list, ft_lstnew("b"));
// 	ft_lstadd_back(&list, ft_lstnew("c"));
// 	printf("%s\n", (char *) list->content);
// 	printf("%s\n", (char *) list->next->content);
// 	printf("%s\n", (char *) list->next->next->content);
// 	free(list->next->next);
// 	free(list->next);
// 	free(list);
// }
