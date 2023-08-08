NAME	=	libft.a

FILES	=	ft_putnbr_fd.c ft_putendl_fd.c \
			ft_putchar_fd.c ft_putstr_fd.c \
			ft_atoi.c ft_bzero.c ft_isalnum.c \
			ft_memcpy.c ft_memchr.c ft_memcmp.c \
			ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_isprint.c ft_memset.c ft_strlen.c \
			ft_strnstr.c ft_strdup.c ft_substr.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_strlcpy.c ft_strlcat.c ft_calloc.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_toupper.c ft_tolower.c ft_memmove.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c

FILES_B	=	ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c

HEAD	=	libft.h

OBJ		=	${FILES:%.c=%.o}
# ${patsubst %.c, %.o, ${FILES}}
# http://linux.yaroslavl.ru/docs/prog/gnu_make_3-79_russian_manual.html#:~:text=%24(patsubst%20%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD%2C%D0%B7%D0%B0%D0%BC%D0%B5%D0%BD%D0%B0%2C%24(%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D0%B0%D1%8F))

OBJ_B	=	${FILES_B:%.c=%.o}
# http://linux.yaroslavl.ru/docs/prog/gnu_make_3-79_russian_manual.html#:~:text=bar%20%3A%3D%20%24(foo%3A%25.o%3D%25.c)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -I${HEAD}

.PHONY	:	all clean fclean re bonus

all		:	${NAME}

${NAME}	:	${OBJ} ${HEAD}
	ar rcs ${NAME} $?
# $? - Имена всех пререквизитов (разделенные пробелами), которые являются "более новыми", чем цель

%.o		:	%.c ${HEAD}
	${CC} ${CFLAGS} -c $< -o $@
# $< - Имя первого пререквизита.
# $@ - Имя файла цели правила. Если цель является элементом архива (archive member), то '$@' обозначает имя архивного файла.

bonus	:
	@make OBJ="${OBJ_B}" all
# @ - "Тихая собачка"

clean	:
	@rm -f ${OBJ} ${OBJ_B}

fclean	:	clean
	@rm -f ${NAME}

re		:	fclean all