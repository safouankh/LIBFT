/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:02 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 15:28:31 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*un_str1;
	unsigned char	*un_str2;
	size_t			i;

	un_str1 = (unsigned char *)str1;
	un_str2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (un_str1[i] != un_str2[i])
			return (un_str1[i] - un_str2[i]);
		i++;
	}
	return (0);
}
