#include <stdlib.h>
char *strdup(char const *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    char *dup = (char *)malloc(sizeof(char) * (i + 1));
    if (dup == NULL)
    {
        return NULL;
    }
    i = 0;
    while (s[i] != '\0')
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}
char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *newstr = strdup(s);
    if (newstr == NULL)
    {
        return NULL;
    }
    while (newstr[i] != '\0')
    {
        newstr[i] = f(i,newstr[i]);
        i++;
    }
    return newstr;
}
/*
#include <stdio.h>
#include <ctype.h>

// Test transformation function: alternates between uppercase and lowercase
char alternate_case(unsigned int index, char c) {
    if (index % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}

void test_ft_strmapi() {
    char *original = "hello world!";
    
    // Apply the ft_strmapi function with alternate_case
    char *mapped = ft_strmapi(original, alternate_case);
    
    if (mapped != NULL) {
        printf("Original string: %s\n", original);
        printf("Mapped string:   %s\n", mapped);
    } else {
        printf("Memory allocation failed!\n");
    }

    // Free the allocated memory for mapped string
    free(mapped);
}

int main() {
    test_ft_strmapi();
    return 0;
}
*/