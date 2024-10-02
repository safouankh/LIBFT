#include <stdlib.h>

void ft_memdel(void **ap) {
    if (ap && *ap) {
        free(*ap);
        *ap = NULL;
    }
}
/*
#include <stdio.h>

int main() {
    char *str = (char *)malloc(100 * sizeof(char)); // Dynamically allocate memory
    if (str == NULL) {
        return 1; // Failed to allocate memory
    }

    // Fill the allocated memory with some data
    for (int i = 0; i < 99; i++) {
        str[i] = 'a';
    }
    str[99] = '\0';

    printf("Before free: %s\n", str); // Print allocated memory contents

    // Free memory and set the pointer to NULL
    ft_memdel((void **)&str);

    // Check if the pointer is now NULL
    if (str == NULL) {
        printf("Pointer is NULL after freeing.\n");
    }

    return 0;
}
*/