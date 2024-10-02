#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
char *ft_strrchr(char *str, char c)
{
    int i = ft_strlen(str);
    while (i != 0)
    {
        if(str[i] == c)
        {
            return &str[i];
        }
        i--;
    }
    if (c == '\0')
    {
        return str;
    }
    return 0;
}
/*
#include <stdio.h>

int main() {
   char str[] = "Tutorialspoint";
   char ch = 'n';

   char* ptr = ft_strrchr(str, ch);

   if (ptr) {
       printf("Last occurrence of '%c' in \"%s\" is at index %ld\n", ch, str, ptr - str);
   } else {
       printf("'%c' is not present in \"%s\"\n", ch, str);
   }

   return 0;
}
*/