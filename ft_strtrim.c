/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:04:02 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/03 05:38:16 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (len_s1 > start && ft_strchr(set, s1[len_s1 - 1]))
	{
		len_s1--;
	}
	return (ft_substr(s1, start, len_s1 - start));
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_strtrim("xaagaaaaxqaxbqxagaax", "xga");
// 	printf("%s\n", res);
// 	free(res);
// }
