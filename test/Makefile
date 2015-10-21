
NAME = test 

FLAGS = -Wall -Wextra -Werror

SRC = src/main.c\
	  src/test.c\
	  src/test_bzero.c\
	  src/test_strcat.c\
	  src/test_isalpha.c\
	  src/test_isdigit.c\
	  src/test_isalnum.c\
	  src/test_isascii.c\
	  src/test_isprint.c\
	  src/test_tolower.c\
	  src/test_toupper.c\
	  src/test_puts.c\
	  src/test_strlen.c\
	  src/test_memset.c\
	  src/test_memcpy.c\
	  src/test_strdup.c\
	  src/test_cat.c\
	  src/test_pow.c\
	  src/test_mod.c\
	  src/test_isupper.c\
	  src/test_islower.c\
	  src/test_putchar.c\
	  src/test_putstr.c\
	  src/test_strndup.c

OBJ = $(SRC:.s=.o)

all : ASM $(NAME)

ASM : 
	make -C ../.

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $^ ../libfts.a

%.o : %.c
	gcc $(FLAGS) -o $@  -c $<

clean:
	rm -fr *.o

fclean :
	rm -fr test

re : fclean all
