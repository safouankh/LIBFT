void* ft_memccpy( void* dest, const void* src, int c, int count )
{
    unsigned char *ft_dest = (unsigned char *)dest;
    const unsigned char *ft_src = (const unsigned char *)src;
    unsigned char ft_c = (unsigned char)c;
    int i = 0;
    while(i < count)
    {
        ft_dest[i] = ft_src[i];
        if (ft_src[i] == ft_c)
        {
            return ft_dest;
        }
        i++;
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // Test 1: Copy until character 'o'
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, 'o', 20);
    printf("Test 1 - Expected: 'Hello', Got: '%s'\n", dest);

    // Test 2: Copy entire string (character 'x' not in src)
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, 'x', 20);
    printf("Test 2 - Expected: 'Hello, World!', Got: '%s'\n", dest);

    // Test 3: Copy with count limit less than string length
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, 'o', 4);
    printf("Test 3 - Expected: 'Hell', Got: '%s'\n", dest);

    // Test 4: Copy with zero count
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, 'o', 0);
    printf("Test 4 - Expected: '', Got: '%s'\n", dest);

    // Test 5: Copy with the character being at the last position within count
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, '!', 13);
    printf("Test 5 - Expected: 'Hello, World!', Got: '%s'\n", dest);

    // Test 6: Copy with the character being at the last position within count
    memset(dest, 0, sizeof(dest));
    ft_memccpy(dest, src, '!', 12);
    printf("Test 6 - Expected: 'Hello, World', Got: '%s'\n", dest);

    return 0;
}
*/