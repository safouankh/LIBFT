#include <stdlib.h>
int ft_strlen(char const *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    int i = 0;
    if (s == NULL)
    {
        return NULL;
    }
    if (start >= ft_strlen(s))
    {
        return NULL;
    }
    char *substr = (char *)malloc(sizeof(char) * (len + 1));
    if (substr == NULL)
    {
        return NULL;
    }
    while (s[start + i] != '\0' && i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}
/*
#include <stdio.h>
#include <stdlib.h>

// Function prototype
char *ft_strsub(char const *s, unsigned int start, size_t len);

void test_ft_strsub() {
    // Test cases
    char *s = "hello world";
    
    char *substr1 = ft_strsub(s, 6, 5);
    if (substr1) {
        printf("Test 1 (substring 'world'): %s\n", substr1);  // Expected: "world"
        free(substr1);
    }

    char *substr2 = ft_strsub(s, 0, 5);
    if (substr2) {
        printf("Test 2 (substring 'hello'): %s\n", substr2);  // Expected: "hello"
        free(substr2);
    }

    char *substr3 = ft_strsub(s, 11, 1);  // Out-of-bounds start
    if (substr3 == NULL) {
        printf("Test 3 (out-of-bounds start): NULL\n",substr3);  // Expected: NULL
    }

    char *substr4 = ft_strsub(s, 6, 0);  // Length zero
    if (substr4) {
        printf("Test 4 (empty substring): '%s'\n", substr4);  // Expected: ""
        free(substr4);
    }

    char *substr5 = ft_strsub(NULL, 0, 5);  // NULL string
    if (substr5 == NULL) {
        printf("Test 5 (NULL input): NULL\n");  // Expected: NULL
    }
}

int main() {
    test_ft_strsub();
    return 0;
}
*/