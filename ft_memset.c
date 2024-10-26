/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:27 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 15:34:25 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*fn_ptr;
	char	swap;

	i = 0;
	fn_ptr = (char *)b;
	swap = (char)c;
	while (i < len)
	{
		fn_ptr[i] = swap;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    ft_memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s", str); 
    return 0; 
}
*/
