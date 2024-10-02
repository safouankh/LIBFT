#include <stdio.h>
int ft_strequ(char const *s1, char const *s2)
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
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    if (s1[i] == s2[i])
    {
        return 1;
    }
    return 0;
}
/*
#include <stdio.h>

// Function prototype
int ft_strequ(char const *s1, char const *s2);

void test_ft_strequ() {
    // Test cases
    char *s1 = "hello";
    char *s2 = "hello";
    char *s3 = "hella";
    char *s4 = NULL;
    
    printf("Test 1 (equal strings): %d\n", ft_strequ(s1, s2));  // Expected: 1
    printf("Test 2 (different strings): %d\n", ft_strequ(s1, s3));  // Expected: 0
    printf("Test 3 (one NULL string): %d\n", ft_strequ(s1, s4));  // Expected: 0
    printf("Test 4 (both NULL strings): %d\n", ft_strequ(s4, s4));  // Expected: 1
}

int main() {
    test_ft_strequ();
    return 0;
}
*/