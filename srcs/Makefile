# Rules that must have in makefile
# $(NAME), all, clean, fclean and re.

# define the C compiler
CC = clang

# define any compile-time flags
CFLAGS = -Wall -Wextra -Werror

# name of the project
NAME = libft

# .c files
C_SOURCE = $(wildcard *.c)

# .h file
H_SOURCE = libft.h

# object files
OBJ = $(C_SOURCE:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ): $(C_SOURCE)
	$(CC) -o $(OBJ) -c $(C_SOURCE) $(CFLAGS)

clean:
	rm -rf $(OBj)

