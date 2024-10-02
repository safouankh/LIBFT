void *ft_memchr(const void *str, int c, unsigned int n)
{
    unsigned char *un_str = (unsigned char *)str;
    unsigned char un_c = (unsigned char )c;
    int i = 0;
    if (un_str[i] == '\0' && un_c == '\0')
    {
        return 0;
    }
    while (i < n && un_str[i])
    {
        if (un_str[i] == un_c)
        {
            return &un_str[i];
        }
        i++;
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   const char str[] = "Welcome to India";
   const char ch = 't';

   char* result = (char*)ft_memchr(str, ch, strlen(str));

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str);
   } else {
       printf("'%c' not found in the string\n", ch);
   }
   
   return 0;
}
*/