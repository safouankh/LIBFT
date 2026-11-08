# LIBFT

A custom C library implementing a subset of the standard C library functions, along with utility functions for string manipulation, memory handling, character checks, conversions, and file descriptor output.

This project is inspired by the 42 School `libft` assignment and is designed to help build a strong understanding of C memory management, standard library behavior, and low-level function implementation.

## Features

- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Character classification and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Number and string conversion: `ft_atoi`, `ft_itoa`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Build

From the project root, run:

```bash
make
```

This generates the static library archive:

```bash
libft.a
```

To clean build artifacts:

```bash
make clean
make fclean
make re
```

## Usage

Include the header in your C files:

```c
#include "libft.h"
```

Then compile your project with the library:

```bash
gcc main.c -L. -lft -I.
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, LIBFT!");
    printf("%s\n", str);
    free(str);
    return (0);
}
```

## Files

The project contains the implementation files for each function, along with the main library header:

- `libft.h`
- `Makefile`
- `ft_*.c`

## Notes

This library follows the behavior expected by the standard C library functions, with careful attention to edge cases, memory safety, and portability.

## License

This project is for learning and personal use.
