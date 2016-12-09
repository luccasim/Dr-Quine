CC		= 	swiftc
IMPORT	=	xcrun --sdk macosx
SRC		=	Grace.swift
NAME	=	Grace

all: $(NAME)

$(NAME):
	$(IMPORT) $(CC) $(SRC)

clean:
	/bin/rm -rf Grace_kid.swift

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re