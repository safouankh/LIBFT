int strcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i])
    {
        i++;
    }
    return str1[i] - str2[i];
}
/*
#include <stdio.h>
int main() {
    printf("Test 1: %d\n", strcmp("hello", "hello")); // Expected: 0
    printf("Test 2: %d\n", strcmp("hello", "jello")); // Expected: < 0
    printf("Test 3: %d\n", strcmp("hello", "helLo")); // Expected: > 0
    printf("Test 4: %d\n", strcmp("hello", "hell"));  // Expected: > 0
    printf("Test 5: %d\n", strcmp("hell", "hello"));  // Expected: < 0
    printf("Test 6: %d\n", strcmp("abc", "xyz"));     // Expected: < 0
    printf("Test 7: %d\n", strcmp("", ""));           // Expected: 0
    printf("Test 8: %d\n", strcmp("", "hello"));      // Expected: < 0
    printf("Test 9: %d\n", strcmp("hello!", "hello"));// Expected: > 0
    printf("Test 10: %d\n", strcmp("héllo", "hello"));// Expected: > 0
    printf("Test 11: %d\n", strcmp("HELLO", "hello"));// Expected: < 0

    return 0;
}
*/