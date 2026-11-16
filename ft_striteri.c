/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 01:59:51 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/04 07:20:26 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_toupperaa(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 32;
// 	}
// }

// int	main(void)
// {
// 	char	*s;

// 	s = malloc(3);
// 	s[0] = 'p';
// 	s[1] = 'r';
// 	s[2] = 0;
// 	printf("%s\n", s);
// 	ft_striteri(s, ft_toupperaa);
// 	printf("%s", s);
// }
