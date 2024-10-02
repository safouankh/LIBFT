#include <stdlib.h>
int ft_strlen(char const *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
char * ft_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        return NULL;
    }
    int i = 0;
    int ii = 0;
    int len_s1_s2 = ft_strlen(s1) + ft_strlen(s2);
    char *str = (char *)malloc(sizeof(char) * (len_s1_s2 + 1));
    if (str == NULL)
    {
        return NULL;
    }
    while (s1[ii] != '\0')
    {
        str[i++] = s1[ii++];
    }
    ii = 0;
    while (s2[ii] != '\0')
    {
        str[i++] = s2[ii++];
    }
    str[i] = '\0';
    return str;
}
/*
#include <stdio.h>
int main()
{
    char *s1 = "safouan ";
    char *s2 = "el khammari";
    char *str = ft_strjoin(s1,s2);
    printf("%s",str);
}
*/