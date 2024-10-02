#include<unistd.h>
#include<stdlib.h>
int lenHelper(int x) {
    int i = 0;
    if (x < 0 && x == -2147483648)
    {
        i += 1;
        x -= 1;
    }
    if (x >= 1000000000) return 10 + i;
    if (x >= 100000000)  return 9 + i;
    if (x >= 10000000)   return 8 + i;
    if (x >= 1000000)    return 7 + i;
    if (x >= 100000)     return 6 + i;
    if (x >= 10000)      return 5 + i;
    if (x >= 1000)       return 4 + i;
    if (x >= 100)        return 3 + i;
    if (x >= 10)         return 2 + i;
    return 1 + i;
}
char *cpyshit(char *str,int ii,int j,int n)
{
    if (j ==  1)
    {
        str[0] = '-';
        while (ii > 0)
        {
            str[ii] = (n % 10 + '0');
            if (n > 9)
            {
                n /= 10;
            }
            ii--;
        }
    }else{
        while (ii >= 0)
        {
            str[ii] = (n % 10 + '0');
            if (n > 9)
            {
                n /= 10;
            }
            ii--;
        }
    }
    return str;
}
char * ft_itoa(int n){
    int i = 0;
    int ii;
    int negga = 0;
    if (n < 0)
    {
        negga++;
        n *= -1;
        i++;
    }
    i += lenHelper(n);
    char *str = (char *)malloc(sizeof(char) * (i + 1));
    if (str == NULL)
        return NULL;
    ii = i - 1;
    if (n == -2147483648)
        return "-2147483648";
    if (negga == 1)
    {
        str = cpyshit(str,ii,1,n);
    }else{
        str = cpyshit(str,ii,0,n);
    }
    str[i] = '\0';
    return str;
}
/*
#include <stdio.h>
int main()
{
    char *str = ft_itoa(-0);
    printf("%s",str);
}
*/