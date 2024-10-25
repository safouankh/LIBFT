/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:51:43 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/21 21:51:43 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
    if (i == n)
    {
        return 0;
    }
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int main() {
    // Test 1: Identical strings, n greater than length
    printf("Test 1: %d\n", ft_strncmp("hello", "hello", 10)); // Expected: 0

    // Test 2: Identical strings up to n
    printf("Test 2: %d\n", ft_strncmp("hello", "helicopter", 3)); // Expected: 0

    // Test 3: Different strings within n
    printf("Test 3: %d\n", ft_strncmp("hello", "helLo", 5)); // Expected: > 0

    // Test 4: n greater than string lengths
    printf("Test 4: %d\n", ft_strncmp("hello", "hello", 10)); // Expected: 0

    // Test 5: n smaller than string length
    printf("Test 5: %d\n", ft_strncmp("hello", "hell", 4)); // Expected: 0

    // Test 6: Strings differ after n characters
    printf("Test 6: %d\n", ft_strncmp("hello", "hellz", 4)); // Expected: 0

    // Test 7: Strings differ within n characters
    printf("Test 7: %d\n", ft_strncmp("hello", "hellz", 5)); // Expected: < 0

    // Test 8: First string is a prefix of second
    printf("Test 8: %d\n", ft_strncmp("hell", "hello", 5)); // Expected: < 0

    // Test 9: Second string is a prefix of first
    printf("Test 9: %d\n", ft_strncmp("hello", "hell", 5)); // Expected: > 0

    // Test 10: Empty strings
    printf("Test 10: %d\n", ft_strncmp("", "", 5)); // Expected: 0

    return 0;
}
*/