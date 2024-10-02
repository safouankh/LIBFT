#include <unistd.h>
int ft_strlen(char *s)
{
    int i = 0;
    while(s[i]){
        i++;
    }
    return i;
}
int ft_strlcat(char *dest,char *src, int n)
{
    int dest_len = ft_strlen(dest);
    int src_len = ft_strlen(src);
    if(dest_len == n){
        return dest_len + src_len;
    }
    int i = 0;
    while(src[i] && (dest_len) < (n - 1)){
        dest[dest_len] = src[i];
        i++;
        dest_len++;
    }
    dest[dest_len] = '\0';
    return dest_len + src_len;
}
/*
#include <stdio.h>
int main(){
char dest[10] = "Hello";
char src[] = "world";

int result = ft_strlcat(dest, src, 10);
int i = 0;
while(dest[i]){
    i++;
}
printf("%d",i);
printf("Result: %d, Dest: %s\n", result, dest);
}
*/