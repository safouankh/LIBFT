#include <unistd.h>
int ft_str_len(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
char *strcat(char *dest, const char *src)
{
    int i = 0;
    int j = ft_str_len(dest);
    while (src[i])
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
    char dest[13] = "el khammari ";
    char *result = strcat(dest,src);
    printf("%s",result);
}
*/