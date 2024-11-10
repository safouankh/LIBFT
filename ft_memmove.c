/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:24 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:48:24 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str_to;
	const unsigned char	*str_from;

	str_to = (unsigned char *)dst;
	str_from = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (!str_to && !str_from)
		return (NULL);
	if (str_to < str_from)
		while (n--)
			*str_to++ = *str_from++;
	else
		while (n--)
			str_to[n] = str_from[n];
	return (dst);
}
