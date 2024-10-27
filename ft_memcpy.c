/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:06 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 15:29:50 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	char		*str_to;
	const char	*str_from;

	str_to = (char *)to;
	str_from = (const char *)from;
	if(to == from)
		return (to);
	if (!str_to || !str_from)
		return (NULL);
	while (n--)
		*str_to++ = *str_from++;
	return (to);
}
