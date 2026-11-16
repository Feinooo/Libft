/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 21:13:26 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:42:03 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	if (n == 0)
		return (0);
	i = 0;
	c1 = (const unsigned char *) s1;
	c2 = (const unsigned char *) s2;
	while (i < n - 1 && c1[i] == c2[i])
	{
		i++;
	}
	return (c1[i] - c2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "Hello";
// 	char	s2[] = "Hllo";

// 	printf("%d\n", ft_memcmp(s1, s2, 0));
// 	printf("%d\n", memcmp(s1, s2, 0));
// }
