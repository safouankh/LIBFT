/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:47:57 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 15:27:53 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*un_str;
	unsigned char	un_c;
	size_t			i;

	un_str = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (un_str[i] == un_c)
			return (&un_str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
   const char str[] = "Welcome to India";
   const char ch = 't';

   char* result = (char*)ft_memchr(str, ch, strlen(str));

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str);
   } else {
       printf("'%c' not found in the string\n", ch);
   }
   
   return 0;
}
*/
