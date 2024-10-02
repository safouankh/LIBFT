#include<unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    
    return i;
}

/*#include <stdio.h>
int main()
{
    printf("%d", ft_strlen("safouan"));
}*/