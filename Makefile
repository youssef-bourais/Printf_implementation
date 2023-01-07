SRCS	= ft_printf.c ft_putchar.c ft_putnbr_hexa_upper.c ft_putnbr_hexa.c ft_putnbr_unsigned.c ft_putnbr.c ft_putstr.c ft_pointer.c
			 
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS} 	

clean:
			${RM} ${OBJS}
fclean:
			${RM} ${NAME} ${OBJS}
re:			fclean all
