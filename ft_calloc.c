/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:25 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/23 14:21:07 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}
/*
#include <stdio.h>

int main() {
    int n = 5;
    
    // Allocate memory for an array of 5 integers
    int *arr = (int*) ft_calloc(n, sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the values (they should all be zero-initialized)
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Modify and print the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Setting arr[0] = 1, arr[1] = 2, ..., arr[4] = 5
        printf("Updated arr[%d] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
*/