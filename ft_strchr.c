/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:13:54 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/03 04:31:35 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			return ((char *) & s[i]);
		}
		i++;
	}
	if ((char) c == '\0')
		return ((char *) & s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "bonjour";

// 	printf("%s\n", ft_strchr(s, 'j'));
// 	printf("%s\n", ft_strchr(s, '\0'));
// 	printf("%s\n", ft_strchr(s, 'o'));
// }
