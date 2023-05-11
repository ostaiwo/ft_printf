# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saomole <saomole@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 19:46:09 by saomole           #+#    #+#              #
#    Updated: 2023/03/02 13:04:37 by saomole          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

# main source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
	ft_strlcat.c ft_strnstr.c ft_atoi.c ft_bzero.c \
	ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \

# bonus source files
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c \

# object files
# substitute the characters .o for the characters .c
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o} 

# gcc compiler
CC = gcc

# flags for compiling
CFLAGS = -Wall -Werror -Wextra
 
# beginning of compilation
all: ${NAME}

${NAME}: ${OBJS} 
		${CC} ${CFLAGS} -c ${SRCS}
		ar -rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${BONUS_OBJS}
		${CC} ${CFLAGS} -c ${BONUS_SRCS}
		ar -rcs ${NAME} ${BONUS_OBJS}

clean: 
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean bonus re
