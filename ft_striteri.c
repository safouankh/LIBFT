/*
#include <stdio.h>

void print_char_with_index(unsigned int index, char *c)
{
    printf("Index %u: %c\n", index, *c);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
int main() {
    char str[] = "hello";

    ft_striteri(str, print_char_with_index);

    return 0;
}
*/
