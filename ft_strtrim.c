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
char * ft_strtrim(char const *s)
{
    int i = ft_strlen(s) - 1;
    int ii = 0;
    int j = 0;
    while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i >= 0)
    {
        i--;
    }
    i += 1;
    while ((s[ii] == ' ' || s[ii] == '\n' || s[ii] == '\t') && s[i] != '\0')
    {
        ii++;
    }
    char *str = (char *)malloc(sizeof(char) * (i - ii + 1));
    if (str == NULL)
    {
        return NULL;
    }
    while (ii < i)
    {
        str[j++] = s[ii++];
    }
    str[j] = '\0';
    return str;
}
#include <stdio.h>
int main()
{
    char* test = ft_strtrim(" \t Hello World \n\n");
    printf("%s",test);
}