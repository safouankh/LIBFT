#include <stdio.h>
int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i = 0;
    if (s1 == NULL && s2 == NULL)
    {
        return 1;
    }
    if (s1 == NULL || s2 == NULL)
    {
        return 0;
    }
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        i++;
    }
    if (s1[i] == s2[i])
    {
        return 1;
    }
    return 0;
}/*
#include <stdio.h>

// Function prototype
int ft_strnequ(char const *s1, char const *s2, size_t n);

void test_ft_strnequ() {
    // Test cases
    char *s1 = "hello world";
    char *s2 = "hello world";
    char *s3 = "hello mars";
    char *s4 = NULL;
    
    printf("Test 1 (equal strings, n=5): %d\n", ft_strnequ(s1, s2, 5));  // Expected: 1
    printf("Test 2 (different strings, n=5): %d\n", ft_strnequ(s1, s3, 5));  // Expected: 1
    printf("Test 3 (different strings, n=7): %d\n", ft_strnequ(s1, s3, 7));  // Expected: 0
    printf("Test 4 (one NULL string): %d\n", ft_strnequ(s1, s4, 5));  // Expected: 0
    printf("Test 5 (both NULL strings): %d\n", ft_strnequ(s4, s4, 5));  // Expected: 1
}

int main() {
    test_ft_strnequ();
    return 0;
}
*/