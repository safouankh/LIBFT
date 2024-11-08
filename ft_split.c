/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:23 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/25 16:11:31 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gta_strlen(const char *str, char sep)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != sep)
	{
		i++;
	}
	return (i);
}

static char	*ft_strncpy(char *dest, const char *src, char sep)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i] != '\0' && src[i] != sep)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**process_word(const char *s, char c, char **strsplit, int *j)
{
	int	len;

	len = gta_strlen(s, c);
	strsplit[*j] = alloc_str(len);
	if (!ft_strncpy(strsplit[*j], s, c))
	{
		while (--(*j) >= 0)
			free(strsplit[*j]);
		free(strsplit);
		return (NULL);
	}
	(*j)++;
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**strsplit;

	if (!s)
		return (NULL);
	j = 0;
	strsplit = ar_str(s, c);
	if (!strsplit)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strsplit = process_word(s, c, strsplit, &j);
			if (!strsplit)
				return (NULL);
			s += gta_strlen(s, c);
		}
		else
			s++;
	}
	strsplit[j] = NULL;
	return (strsplit);
}
