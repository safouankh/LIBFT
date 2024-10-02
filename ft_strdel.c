#include <stdlib.h>
void ft_strdel(char **as)
{
    if (as && *as)
    {
        free(*as);
        *as = NULL;
    }
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for a string
    char *str = ft_strnew(10);

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the string...
    printf("Allocated string: '%s'\n", str);

    // Free the memory and set the pointer to NULL
    ft_strdel(&str);

    // Check if the pointer is NULL
    if (str == NULL) {
        printf("Memory successfully freed and pointer set to NULL\n");
    }

    return 0;
}
*/