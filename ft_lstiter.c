/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:47 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/08 16:10:24 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *) content);
// }

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew("a");
// 	ft_lstadd_back(&list, ft_lstnew("b"));
// 	ft_lstadd_back(&list, ft_lstnew("c"));
// 	ft_lstiter(list, print_content);
// 	ft_lstclear(&list, NULL);
// }
