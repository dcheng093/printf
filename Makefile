# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 16:57:29 by dcheng            #+#    #+#              #
#    Updated: 2025/11/15 21:06:02 by dcheng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTDIR = libft

SRC = ft_printf.c \
	ft_printf_utils.c \
	ft_printf_utils_utils.c

OBJS = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT = $(LIBFTDIR)/libft.a

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I. -I${LIBFTDIR} -c $< -o $@

${LIBFT}:
	${MAKE} -C ${LIBFTDIR}

${NAME}: ${LIBFT} ${OBJS} 
	cp ${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
