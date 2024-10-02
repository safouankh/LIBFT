#include <stdlib.h>
int ft_strlen(const char *str,char sep)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != sep)
    {
        i++;
    }
    return i;
}
char *ft_strncpy(char* dest,const char * src,char sep)
{
    int i = 0;
    while (src[i] != '\0' && src[i] != sep)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int count(char const *s,char sep)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        if (s[i - 1] != sep && (i - 1) >= 0 && s[i] == sep)
        {
            j++;
        }
        i++;
    }
    if (s[i] == '\0' && s[i - 1] != sep)
        j++;
    return j;
}
char ** ft_strsplit(char const *s, char c)
{
    int i = 0;
    int j = 0;
    int len;
    int words = count(s,c);
    char **strsplit = (char **)malloc(words * sizeof(char *));
    while (s[i] != '\0')
    {
        len = 0;
        if (s[i] != c)
        {
            len = ft_strlen(s + i,c);
            strsplit[j] = (char *)malloc(sizeof(char) * (len + 1));
            if (strsplit[j] == NULL)
            {
                return NULL;
            }
            strsplit[j] = ft_strncpy(strsplit[j],s + i,c);
            j++;
            i += len;
        }
        i++;
    }
    return strsplit;
}
/*
#include <stdio.h>
int main()
{
    char **strs = ft_strsplit("***hello*fellow**students*", '*');
    int i = 0;
    while (i < 3)
    {
        printf("%s",strs[i]);
        if (i < 3 - 1)
        {
            printf(", ");
        }
        i++;
    }
    printf(".");
    return 0;
}*/