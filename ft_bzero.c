/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 15:39:23 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:41:53 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	buf[5] = "abcde";
// 	int		i;

// 	i = 0;
// 	ft_bzero(buf, 2);
// 	while (i <= 5)
// 	{
// 		printf("%d = %d\n", i, buf[i]);
// 		i++;
// 	}
// }
