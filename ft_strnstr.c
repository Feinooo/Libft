/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:35:01 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/04 20:49:03 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *) & big[i]);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Hello world";

// 	printf("%s\n", ft_strnstr(s, "world", 11));
// 	printf("%s\n", ft_strnstr(s, "", 0));
// 	printf("%s\n", ft_strnstr(s, "lo", 3));
// }
