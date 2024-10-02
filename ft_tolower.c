int toupper(int ch)
{
    if (ch >= 65 && ch <= 90)
    {
        ch += 32;
    }
    return ch;
}
/*
#include <stdio.h>
 
int main()
{
    char ch;
 
    ch = 'G';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
 
    return 0;
}
*/