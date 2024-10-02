void *ft_memcpy(void *to, const void *from, int numBytes)
{
    unsigned char* str_to = (unsigned char *)to;
    const unsigned char* str_from = (const unsigned char *)from;
    int i;
    if (str_to == '\0' || str_from == '\0')
        return '\0';

    if (str_from < str_to && str_to < str_from + numBytes) {
        i = numBytes - 1;
        while (i >= 0)
        {
            str_to[i] = str_from[i];
            i--;
        }
    } else {
        i = 0;
        while (i < numBytes) {
            str_to[i] = str_from[i];
            i++;
        }
    }
    return str_to;
}
/*
void *ft_memcpy(void *to, const void *from, int numBytes)
{
    unsigned char* str_to = (unsigned char *)to;
    const unsigned char* str_from = (const unsigned char *)from;

    if (str_to == '\0' || str_from == '\0')
        return 0;

    if (str_from < str_to && str_to < str_from + numBytes) {
        // Overlapping regions: Copy backwards
        str_to += numBytes;
        str_from += numBytes;
        while (numBytes--) {
            *(--str_to) = *(--str_from);
        }
    } else {
        // Non-overlapping regions: Copy forwards
        while (numBytes--) {
            *str_to++ = *str_from++;
        }
    }

    return to;
}

#include <stdio.h>
#include <string.h>

int main() {
    char dest[10];
    const char *src = "Test";
    const char *src_overlap = dest + 1;

    // Test 1: Both pointers are valid
    printf("%d\n", ft_memcpy(dest, src, 4) == dest && memcmp(dest, src, 4) == 0);

    // Test 2: Destination pointer is NULL
    printf("%d\n", ft_memcpy(NULL, src, 4) == NULL);

    // Test 3: Source pointer is NULL
    printf("%d\n", ft_memcpy(dest, NULL, 4) == NULL);

    // Test 4: Both pointers are NULL
    printf("%d\n", ft_memcpy(NULL, NULL, 4) == NULL);

    // Test 5: numBytes is 0
    printf("%d\n", ft_memcpy(dest, src, 0) == dest);

    // Test 6: Copying to the same memory (overlapping areas)
    dest[0] = 'A';
    printf("%d\n", ft_memcpy(dest, src_overlap, 3) == dest && memcmp(dest, src_overlap, 3) == 0);

    // Test 7: Large copy
    char large_src[1000];
    char large_dest[1000];
    memset(large_src, 'A', 1000);
    printf("%d\n", ft_memcpy(large_dest, large_src, 1000) == large_dest && memcmp(large_dest, large_src, 1000) == 0);

    return 0;
}
*/