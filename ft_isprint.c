#include <stdio.h>
int isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
       return 1;
    }
    return 0;
}
/*
int main() {
   char c1 = 126; // Extended ASCII character
   char c2 = 32; // Extended ASCII character
   char c3 = 80; // Extended ASCII character

   printf("isprint('%c'): %d\n", c1, isprint(c1));
   printf("isprint('%c'): %d\n", c2, isprint(c2));
   printf("isprint('%c'): %d\n", c3, isprint(c3));

   return 0;
}
*/