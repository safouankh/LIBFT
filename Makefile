SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_strchr.c \
      ft_strjoin.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_split.c \
      ft_substr.c \
      ft_strtrim.c \
      ft_tolower.c \
      ft_toupper.c \
	ft_strlcat.c \
      ft_strdup.c \
      ft_striteri.c
CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
## ar : kat3ni milefat .o tjm3om ou thotom f libft.a
## rc : r kat3ni replace ida kanet libft.a fija kayna
##   ou c kat3ni create ida makanetch libft.a dija kayna
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
## ranlib : mouhima bach trteb libft.a ou 
clean:
	@rm -f *.o

fclean: clean
	@rm -f *.a

re: fclean all