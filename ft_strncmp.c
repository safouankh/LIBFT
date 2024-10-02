int strncmp(char *str1, char *str2, int n)
{
    int i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
    {
        i++;
    }
    return str1[i] - str2[i];
}
/*
#include <stdio.h>

int main() {
    // Test 1: Identical strings, n greater than length
    printf("Test 1: %d\n", strncmp("hello", "hello", 10)); // Expected: 0

    // Test 2: Identical strings up to n
    printf("Test 2: %d\n", strncmp("hello", "helicopter", 3)); // Expected: 0

    // Test 3: Different strings within n
    printf("Test 3: %d\n", strncmp("hello", "helLo", 5)); // Expected: > 0

    // Test 4: n greater than string lengths
    printf("Test 4: %d\n", strncmp("hello", "hello", 10)); // Expected: 0

    // Test 5: n smaller than string length
    printf("Test 5: %d\n", strncmp("hello", "hell", 4)); // Expected: 0

    // Test 6: Strings differ after n characters
    printf("Test 6: %d\n", strncmp("hello", "hellz", 4)); // Expected: 0

    // Test 7: Strings differ within n characters
    printf("Test 7: %d\n", strncmp("hello", "hellz", 5)); // Expected: < 0

    // Test 8: First string is a prefix of second
    printf("Test 8: %d\n", strncmp("hell", "hello", 5)); // Expected: < 0

    // Test 9: Second string is a prefix of first
    printf("Test 9: %d\n", strncmp("hello", "hell", 5)); // Expected: > 0

    // Test 10: Empty strings
    printf("Test 10: %d\n", strncmp("", "", 5)); // Expected: 0

    return 0;
}
*/