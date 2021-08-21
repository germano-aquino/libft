# Rules that must have in makefile
# $(NAME), all, clean, fclean and re.

# define the C compiler
CC = clang

# define any compile-time flags
CFLAGS = -Wall -Wextra -Werror

# name of the project
NAME = libft.a

# .c files
C_SOURCE = $(wildcard *.c)

# .h file
H_SOURCE = libft.h

# object files
OBJ = $(C_SOURCE:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(C_SOURCE)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

bonus: all
