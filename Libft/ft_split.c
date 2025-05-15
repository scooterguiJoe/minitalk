/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:23:48 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/03 12:24:04 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	num_palavras;
	int		i;

	num_palavras = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			num_palavras++;
		while (s[i] != c && s[i])
			i++;
	}
	return (num_palavras);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**l;
	int		i;

	i = 0;
	l = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !l)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			l[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	l[i] = NULL;
	return (l);
}
// int main(void)
// {
// 	char const	*str = "Hello world this is a test";
// 	char	**result = ft_split(str, ' ');

// 	if (result)
// 	{
// 		int i = 0;
// 		while (result[i])
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	return 0;
// }
