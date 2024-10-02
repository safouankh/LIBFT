#include <unistd.h>

char *stpcpy(char *restrict dst, const char *restrict src)
{
    int i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
/*
#include <stdio.h>

int main()
{
    char src[] = "safouan";
    char dst[20];

    char *end_ptr = stpcpy(dst, src);

    printf("Copied string: %s\n", dst);
    printf("Pointer to the null character: %p\n", (void*)end_ptr);

    return 0;
}
*/