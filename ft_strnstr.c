#include <stdio.h>

char *strnstr(char *s1, char *s2, int len)
{
    int i = 0;
    int j;
    if (s2[0] == '\0')
    {
        return s1;
    }
    while (s1[i])
    {
        j = 0;
        while (s2[j] == s1[j + i] && s2[j] && (j + i) < len)
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
int main() {
    char *haystack = "Hello, world!";
    char *needle = "world";
    int len = 12;

    char *result = strnstr(haystack, needle, len);

    if (result) {
        printf("Found '%s' in '%s' within the first %zu characters.\n", needle, haystack, len);
    } else {
        printf("'%s' not found in the first %zu characters of '%s'.\n", needle, len, haystack);
    }

    return 0;
}
*/