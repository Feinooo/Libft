/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 21:14:18 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:42:17 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *) & s[i]);
		i--;
	}
	if (s[0] == (char) c)
		return ((char *) & s[0]);
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "bonjjoujr";

// 	printf("%s\n", ft_strrchr(s, 'o'));
// 	printf("%s\n", ft_strrchr(s, 'f'));
// 	printf("%s\n", ft_strrchr(s, 'j'));
// 	printf("%s\n", ft_strrchr(s, 106));
// 	printf("%s\n", strrchr(s, 106));
// }
