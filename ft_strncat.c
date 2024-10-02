#include <unistd.h>
int str_len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}
char *strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = str_len(dest);
    while (i < n && src[i])
    {
        dest[j++] = src[i++];
    }
    dest[j] = '\0';
    return dest;
}
/*
#include <stdio.h>
int main()
{
    char src[] = "safouan";
    char dest[] = "el khammari ";
    char *result = strncat(dest,src,10);
    printf("%s",result);
}
*/