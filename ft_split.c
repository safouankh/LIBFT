/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:19:10 by sael-kha          #+#    #+#             */
/*   Updated: 2024/11/08 13:19:10 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	counter;
	int		i;
	int		key;

	counter = 0;
	i = 0;
	while (s[i])
	{
		key = 1;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (key)
			{
				counter++;
				key = 0;
			}
			i++;
		}
	}
	return (counter);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static char	**ft_setwords(char **res, const char *s, char c)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + len] && s[i + len] != c)
			len++;
		if (len > 0)
		{
			res[j] = malloc(sizeof(char) * (len + 1));
			if (!res[j])
				return (ft_free(res));
			ft_strlcpy(res[j++], s + i, len + 1);
		}
		i += len;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	num;
	char	**res;

	if (s == NULL)
		return (NULL);
	num = count_words(s, c);
	res = malloc(sizeof(char *) * (num + 1));
	if (!res)
		return (NULL);
	return (ft_setwords(res, s, c));
}
