/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_toupper.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 13:42:03 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:42:23 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char	m = 'a';

// 	printf("%d", ft_toupper(m));
// }
