/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:45 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/08 16:27:32 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *) content);
// }

// void	*copy_content(void *content)
// {
// 	return (ft_strdup((char *) content));
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*copy;

// 	list = ft_lstnew(ft_strdup("abc"));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("def")));
// 	copy = ft_lstmap(list, copy_content, free);
// 	ft_lstiter(copy, print_content);
// 	ft_lstclear(&list, free);
// 	ft_lstclear(&copy, free);
// }
