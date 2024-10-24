/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:10 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:52:10 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] && (i < len))
	{
		j = 0;
		while (s2[j] == s1[j + i] && s2[j] && (j + i) < len)
		{
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}
