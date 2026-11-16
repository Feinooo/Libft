/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:42 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/06 21:25:51 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	int		size;

// 	lst = ft_lstnew("galb");
// 	lst->next = ft_lstnew("test");
// 	lst->next->next = ft_lstnew("hello");
// 	lst->next->next->next = NULL;
// 	size = ft_lstsize(lst);
// 	printf("%d\n", size);
// }
