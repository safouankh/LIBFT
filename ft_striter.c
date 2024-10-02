/*
#include <stdio.h>
void to_uppercase(char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - ('a' - 'A'); // Convert to uppercase
    }
}
*/
void ft_striter(char *s, void (*f)(char *))
{
    int i = 0;
    while (s[i])
    {
        f(&s[i]); // Pass the address of the character
        i++;
    }
}
/*
int main() {
    char str[] = "hello world";
    
    ft_striter(str, to_uppercase); // Apply to_uppercase to each character
    
    printf("Modified string: %s\n", str); // Output: "HELLO WORLD"
    
    return 0;
}
*/