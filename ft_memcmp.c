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

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*un_str1;
	char	*un_str2;
	size_t	i;

	un_str1 = (char *)str1;
	un_str2 = (char *)str2;
	i = 0;
	while (i < n - 1)
	{
		if (un_str1[i] != un_str2[i])
			return (un_str1[i] - un_str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   int arr1[] = {1, 2, 3, 4, 5};
   int arr2[] = {1, 2, 3, 4, 5};

   int result = ft_memcmp(arr1, arr2, sizeof(arr1));

   if (result == 0) {
       printf("Arrays are equal\n");
   } else {
       printf("Arrays are not equal\n");
   }
    return 0;
}
*/
