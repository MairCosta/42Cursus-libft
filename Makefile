NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all:$(NAME)

$(NAME): $(OBJ)
			ar rc $(NAME) $(OBJ)
clean:
	$(RM)	$(OBJ)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)