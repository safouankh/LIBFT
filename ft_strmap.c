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
char * ft_strmap(char const *s, char (*f)(char))
{
    int i = 0;
    char *newstr = strdup(s);
    if (newstr == NULL)
    {
        return NULL;
    }
    while (newstr[i] != '\0')
    {
        newstr[i] = f(newstr[i]);
        i++;
    }
    return newstr;
}
/*
#include <stdio.h>
#include <ctype.h>  // For toupper function

// Function prototypes
char to_upper(char c);
void test_ft_strmap();

int main() {
    test_ft_strmap();
    return 0;
}

// Test transformation function: converts a character to uppercase
char to_upper(char c) {
    return toupper(c);  // Uses the standard library function to convert to uppercase
}

// Function to test ft_strmap
void test_ft_strmap() {
    char *original = "hello world!";
    
    // Apply the ft_strmap function with to_upper
    char *mapped = ft_strmap(original, to_upper);
    
    if (mapped != NULL) {
        printf("Original string: %s\n", original);
        printf("Mapped string:   %s\n", mapped);
    } else {
        printf("Memory allocation failed!\n");
    }
    
    // Free the allocated memory for mapped string
    free(mapped);
}
*/