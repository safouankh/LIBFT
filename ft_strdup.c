#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

char *strdup(const char *s)
{
    int i = ft_strlen(s);
    char *dup;
    dup = (char *) malloc (sizeof(char) * i + 1);
    if (dup == NULL)
    {
        return  NULL;
    }
    i = 0;
    while (s[i])
    {
        dup[i] = s[i];
        i++;       
    }
    dup[i] = '\0';
    return dup;
}

/*
#include <stdio.h>
int main()
{
    char src[] = "safouan";
    char *dup = strdup(src);
    if (dup == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("len of src is %d\nand len of dup is %d\n",ft_strlen(src),ft_strlen(dup));
    printf("src containe %s\nand dup containe %s",src,dup);
}
*/