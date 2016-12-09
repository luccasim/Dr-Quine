CC		= 	swiftc
IMPORT	=	xcrun --sdk macosx
SRC		=	Sully.swift
OBJ		=	Sully.o
DEL		=	Sully_*
NAME	=	Sully

all: $(NAME)

$(NAME): $(OBJ)
	$(IMPORT) $(CC) $(OBJ)

$(OBJ):
	$(IMPORT) $(CC) -c $(SRC) -o $(OBJ)

clean:
	/bin/rm -rf $(DEL)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re