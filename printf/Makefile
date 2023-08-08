NAME	=	libftprintf.a

FILES	=	ft_printf.c ft_tools.c ft_tools2.c

HEAD	=	ft_printf.h

OBJ		=	${FILES:%.c=%.o}

OBJ_B	=	${FILES_B:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -I${HEAD}

.PHONY	:	all clean fclean re

all		:	${NAME}

${NAME}	:	${OBJ} ${HEAD}
	ar rcs ${NAME} $?

%.o		:	%.c ${HEAD}
	${CC} ${CFLAGS} -c $< -o $@

clean	:
	@rm -f ${OBJ} ${OBJ_B}

fclean	:	clean
	@rm -f ${NAME}

re		:	fclean all