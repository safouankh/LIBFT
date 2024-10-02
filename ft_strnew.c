#include <stdlib.h>
char * ft_strnew(size_t size)
{
    char *str = (char *)malloc(sizeof(char) * (size + 1));
    if (str == NULL)
    {
        return NULL;
    }
    int i = 0;
    while (i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return str;
}
/*
#include <stdio.h>
// Function to test ft_strnew
void test_ft_strnew(size_t size) {
    // Allocate memory for the new string
    char *str = ft_strnew(size);

    // Check if malloc returned NULL
    if (str == NULL) {
        printf("Memory allocation failed for size %zu\n", size);
        return;
    }

    // Check if all characters are initialized to '\0'
    for (size_t i = 0; i <= size; i++) {
        if (str[i] != '\0') {
            printf("Test failed: character at index %zu is not '\\0'\n", i);
            free(str);
            return;
        }
    }

    // If we reach here, all characters were '\0'
    printf("Test passed: all characters initialized to '\\0' for size %zu\n", size);

    // Free the allocated memory
    free(str);
}

int main() {
    // Test with different string sizes
    test_ft_strnew(5);
    test_ft_strnew(10);
    test_ft_strnew(0);

    return 0;
}
*/