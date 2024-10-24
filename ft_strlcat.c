/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:51:13 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 19:27:28 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	int		i;

	i = 0;
	dest_len = (size_t)ft_strlen(dst);
	src_len = (size_t)ft_strlen(src);
	if (dest_len == n)
		return (dest_len + src_len);
	while (src[i] && (dest_len) < (n - 1))
	{
		dst[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dst[dest_len] = '\0';
	return (dest_len + src_len);
}
