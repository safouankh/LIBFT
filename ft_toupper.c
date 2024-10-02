int toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
    {
        ch -= 32;
    }
    return ch;
}
/*
#include <stdio.h>
 
int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
 
    return 0;
}
*/