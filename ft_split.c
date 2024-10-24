/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:23 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:52:23 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != sep)
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, const char *src, char sep)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && src[i] != sep)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count(char const *s, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] != sep && (i - 1) >= 0 && s[i] == sep)
		{
			j++;
		}
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != sep)
		j++;
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**strsplit;

	i = 0;
	j = 0;
	strsplit = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (strsplit == NULL)
		return (NULL);
	while (s[i])
	{
		len = 0;
		if (s[i] != c)
		{
			len = ft_strlen(s + i, c);
			strsplit[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (strsplit[j] == NULL)
				return (NULL);
			strsplit[j] = ft_strncpy(strsplit[j], s + i, c);
			i += len;
			j++;
		}
		i++;
	}
	strsplit[j] = NULL;
	return (strsplit);
}
