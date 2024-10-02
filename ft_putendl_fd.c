#include <unistd.h>
void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
void ft_putstr_fd(char const *s, int fd)
{
    int i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
    write(fd,"\n",1);
}