/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: noferrei <noferrei@student.42lehavre.fr>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 21:13:47 by noferrei         #+#    #+#              */
/*   Updated: 2026/10/30 18:42:05 by noferrei        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if ((unsigned char *) dest < (const unsigned char *) src)
	{
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			((unsigned char *) dest)[n] = ((const unsigned char *) src)[n];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dst[13] = "Hello";

// 	ft_memmove(dst + 2, "Galbiche", 5);
// 	printf("%s\n", dst);
// }
