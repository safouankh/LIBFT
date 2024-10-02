void ft_strclr(char *s)
{
    if (s)
    {
        int i = 0;
        while (s[i])
        {
            s[i] = '\0';
            i++;
        }
    }
}
/*
#include <stdio.h>

void ft_strclr(char *s);

int main() {
    char *str = NULL;
    
    printf("Before clearing: %s\n", str);
    
    // Clear the string
    ft_strclr(str);
    
    printf("After clearing: %s\n", str);  // Should print an empty string
    
    return 0;
}
*/