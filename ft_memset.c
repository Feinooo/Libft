/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:58:12 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/10 05:44:05 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	buf[10] = "abcdefghi";

	printf("%p\n", ft_memset(buf, 'X', 3));
	ft_memset(buf, 'Y', 1);
	printf("%s\n", buf);
	ft_memset(buf, 'Z', 2);
	printf("%s\n", buf);
}
