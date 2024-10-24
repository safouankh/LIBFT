/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:38:16 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 19:34:08 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_on_set(const char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*handle_trim(int start, int end, char const *s1)
{
	char	*str;
	int		len;

	len = 0;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[len++] = s1[start++];
	}
	str[len] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && is_on_set(s1[i], set))
	{
		i++;
	}
	while (j >= i && is_on_set(s1[j], set))
	{
		j--;
	}
	return (handle_trim(i, j, s1));
}
