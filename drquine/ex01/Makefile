NAME 	=	Grace
SRC 	=	Grace.c
OBJ		=	$(SRC:.c=.o)
CC 		=	llvm-gcc
CFLAGS 	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) 

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME) Grace_kid.c

re: fclean all

.PHONY: re all clean fclean
