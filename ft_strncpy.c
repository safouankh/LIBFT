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
char *strncpy(char *dest, char *src, int n)
{
    int i = 0;
    int j = ft_str_len(src);
    if (j >= n)
    {
        while (i != n)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }else{
        return 0;
    }
    return dest;
}
/*
#include <stdio.h>
int main()
{
    char src[] = "safouan";
    char *dest;
    int i = 8;
    char *result = strncpy(dest,src,i);
    printf("%s",result);
}
*/