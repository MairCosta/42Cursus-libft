SRCS 	= ${wildcard src/*.c}
OBJ 	= ${SRCS:.c=.o}
INS 	= includes
NAME 	= libft.a
LIB 	= ar rc
RL 		= ranlib
CC 			= gcc
RM 			= rm -f
CFLAGS = -Wall -Werror -Wextra -I.

$(NAME): $(OBJ)
			${LIB} $(NAME) $(OBJ)
			$(RL) ${NAME} 
			
all:$(NAME)	

clean:
	$(RM)	$(OBJ)	

fclean: clean
		$(RM)	$(NAME)

re:	fclean all

norm :
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all re clean fclean
