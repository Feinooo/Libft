/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:44:34 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/04 01:00:13 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*p1;
	unsigned char	*p2;

	a = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	if (n == 0)
	{
		return (0);
	}
	while (a < n - 1 && p1[a] == p2[a] && p1[a] != '\0')
	{
		a++;
	}
	if (p1[a] != p2[a])
	{
		return (p1[a] - p2[a]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "abcfyfth3def";
// 	char	s2[] = "abcxx\233";

// 	printf("%d\n", ft_strncmp(s1, s2, 8));
// 	printf("%d\n", strncmp(s1, s2, 8));
// }
