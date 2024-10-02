int ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
    unsigned char *un_str1 = (unsigned char *)str1;
    unsigned char *un_str2 = (unsigned char *)str2;
    int i = 0;
    while (i < n)
    {
        if (un_str1[i] != un_str2[i])
        {
            return (un_str1[i] - un_str2[i]);
        }
        i++;
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   int arr1[] = {1, 2, 3, 4, 5};
   int arr2[] = {1, 2, 3, 4, 5};

   int result = ft_memcmp(arr1, arr2, sizeof(arr1));

   if (result == 0) {
       printf("Arrays are equal\n");
   } else {
       printf("Arrays are not equal\n");
   }
    return 0;
}
*/