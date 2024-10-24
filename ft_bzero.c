/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:46:22 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:46:22 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

#define SIZE 10

int main() {
    char buffer[SIZE];

    // Initialize the buffer with non-zero values for testing
    for (int i = 0; i < SIZE; i++) {
        buffer[i] = 'A';  // Fill buffer with 'A'
    }

    // Call bzero to zero out the buffer
    bzero(buffer, SIZE);

    // Test if all elements are zero
    int all_zero = 1;  // Flag to check if all values are zero
    for (int i = 0; i < SIZE; i++) {
        if (buffer[i] != 0) {
            all_zero = 0;  // Set to false if any non-zero element is found
            break;
        }
    }

    // Print test result
    if (all_zero) {
        printf("Test Passed: All values are zero.\n");
    } else {
        printf("Test Failed: Some values are non-zero.\n");
    }

    return 0;
}*/