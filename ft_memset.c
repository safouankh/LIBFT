void *ft_memset(void *ptr, int x, unsigned int n)
{
    int i = 0;
    unsigned char* fn_ptr = (unsigned char *)ptr;
    unsigned char swap = (unsigned char)x;
    while (i < n)
    {
        fn_ptr[i] = swap;
        i++;
    }
    return ptr;
}
/*
#include <stdio.h>
int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    ft_memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s", str); 
    return 0; 
}
*/