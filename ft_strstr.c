#include <stdio.h>

char *ft_strstr(char *s1,char *s2)
{
    int i = 0;
    int j = 0;
    if (s2[j] == '\0')
    {
        return s1;
    }
    while (s1[i])
    {
        j = 0;
        while (s2[j] == s1[i + j] && s2[j])
        {
            j++;
        }
        if (s2[j] == '\0')
        {
            return &s1[i];
        }
        i++;
    }
    return 0;
}

/*
void test_ft_strstr(char *haystack, char *needle)
{
    char *result = ft_strstr(haystack, needle);
    if (result)
    {
        printf("Found \"%s\" in \"%s\" at position: %ld\n", needle, haystack, result - haystack);
    }
    else
    {
        printf("\"%s\" not found in \"%s\"\n", needle, haystack);
    }
}

int main()
{
    // Test cases
    test_ft_strstr("Hello, world!", "world");
    test_ft_strstr("Hello, world!", "Hello");
    test_ft_strstr("Hello, world!", "lo,");
    test_ft_strstr("Hello, world!", "o, w");
    test_ft_strstr("Hello, world!", "ld!");
    test_ft_strstr("Hello, world!", "");
    test_ft_strstr("Hello, world!", "abc");
    test_ft_strstr("abababc", "ababc");
    test_ft_strstr("mississippi", "issip");

    return 0;
}
*/