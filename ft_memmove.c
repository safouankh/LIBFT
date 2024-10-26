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
	if (!str_to && !str_from)
		return (NULL);
	if (str_to < str_from && str_from < str_to + n)
		while (n--)
			*str_to++ = *str_from++;
	else
		while (n--)
			str_to[n] = str_from[n];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

void test_memmove(void)
{
	char src1[] = "HelloWorld";
	char dst1[11];
	char src2[] = "OverlapTest";
	char dst2[12];
	char *result;

	// Test 1: Non-overlapping, normal move
	printf("Test 1 - Non-overlapping move:\n");
	ft_memmove(dst1, src1, 10);
	printf("Expected: HelloWorld\n");
	printf("Result:   %s\n\n", dst1);

	// Test 2: Overlapping memory (src < dst)
	printf("Test 2 - Overlapping move (src < dst):\n");
	strcpy(dst2, "OverlapTest");
	ft_memmove(dst2 + 4, dst2, 8); // Move part of the string inside the same buffer
	printf("Expected: OverOverlap\n");
	printf("Result:   %s\n\n", dst2);

	// Test 3: Overlapping memory (dst < src)
	printf("Test 3 - Overlapping move (dst < src):\n");
	strcpy(dst2, "OverlapTest");
	ft_memmove(dst2, dst2 + 4, 8); // Move part of the string inside the same buffer
	printf("Expected: TestTest\n");
	printf("Result:   %s\n\n", dst2);

	// Test 4: Passing NULL as both src and dst
	printf("Test 4 - NULL as src and dst:\n");
	result = ft_memmove(NULL, NULL, 5);
	printf("Expected: NULL\n");
	printf("Result:   %p\n\n", result);

	// Test 5: Empty string, move 0 bytes
	printf("Test 5 - Moving 0 bytes:\n");
	result = ft_memmove(dst1, src1, 0);
	printf("Expected: dst remains unchanged\n");
	printf("Result:   %s\n\n", dst1);
}

int main(void)
{
	test_memmove();
	return 0;
}
*/