#include <stddef.h>

char *ft_strchr(char *s1, char s2)
{
    int i = 0;

    while (s1[i])
    {
        if (s1[i] == s2)
            return &s1[i];
        i++;
    }

    if (s2 == '\0')
        return &s1[i];

    return NULL;
}
/*
#include <stdio.h>
int main() 
{
    char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = ft_strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}
*/