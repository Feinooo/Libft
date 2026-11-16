/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 21:13:28 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:42:00 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *) & p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "ba\0zzouka";

// 	printf("%p\n", ft_memchr(s, 'j', 8));
// 	printf("%p\n", ft_memchr(s, 'z', 4));
// 	printf("%p\n", ft_memchr(s, 'a', 3));
// 	printf("%p\n", ft_memchr(s, '\0', 3));
// }
