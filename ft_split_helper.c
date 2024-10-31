/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:11:27 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/31 12:00:50 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char sep)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (j);
}

char	**split_shit(char const *s, char c)
{
	char	**shit;

	shit = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!shit)
		return (NULL);
	return (shit);
}

char	*shit(int len)
{
	char	*split;

	split = (char *)malloc(sizeof(char) * (len + 1));
	if (!split)
		return (NULL);
	return (split);
}
