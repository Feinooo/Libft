/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noferrei <noferrei@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 00:40:55 by noferrei          #+#    #+#             */
/*   Updated: 2026/11/10 04:46:21 by noferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*memory_word(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_all(char **tab, int n)
{
	while (n > 0)
	{
		n--;
		free(tab[n]);
	}
	free(tab);
}

int	skip_word(const char *s, int j, char c)
{
	while (s[j] != '\0' && s[j] != c)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	tab = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			tab[i] = memory_word(s + j, c);
			if (tab[i] == NULL)
				return (free_all(tab, i), NULL);
			i++;
			j = skip_word(s, j, c);
		}
		else
			j++;
	}
	return (tab[i] = NULL, tab);
}

// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("  hello  world  42 ", ' ');
// 	if (tab == NULL)
// 		return (1);
// 	i = 0;
// 	while (tab[i] != NULL)
// 	{
// 		printf("%s", tab[i]);
// 		i++;
// 	}
// }
