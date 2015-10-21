
NAME = libfts.a 

FLAGS = -Wall -Wextra -Werror

INCLUDES = libft/includes

SRC = ft_bzero.s\
	  ft_strcat.s\
	  ft_isalpha.s\
	  ft_isdigit.s\
	  ft_isalnum.s\
	  ft_isascii.s\
	  ft_isprint.s\
	  ft_toupper.s\
	  ft_tolower.s\
	  ft_puts.s\
	  ft_strlen.s\
	  ft_memset.s\
	  ft_memcpy.s\
	  ft_strdup.s\
	  ft_cat.s\
	  ft_pow.s\
	  ft_mod.s\
	  ft_putchar.s\
	  ft_putstr.s\
	  ft_strchr.s\
	  ft_isupper.s\
	  ft_islower.s\
	  ft_strndup.s

OBJ = $(SRC:.s=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.s
	~/.brew/bin/nasm -f macho64 $< 

clean :
	rm -fr *.o

fclean : clean
	rm -fr $(NAME)

re : fclean all
