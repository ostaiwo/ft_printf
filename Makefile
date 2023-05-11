# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saomole <saomole@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 04:46:20 by saomole           #+#    #+#              #
#    Updated: 2023/05/06 05:29:42 by saomole          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# main source files
SRCS = ft_printf.c ft_printf_utilities.c ft_print_pointer.c ft_print_hexadec.c \
	ft_print_unsigned.c \

# object files
# create folder 'obj' for object files
OBJ_DIR = obj
# substitute the characters .o for the characters .c in SRCS files and put the .o files in obj folder
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# libft - with functions from my libft project
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

# gcc compiler
CC = gcc
# flags for compiling
CFLAGS = -Wall -Werror -Wextra

# compile .c file to .o file
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# beginning of compilation
all: $(NAME)

bonus: all

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS)
	cp	$(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT): 
	make -C $(LIBFT_PATH) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re libft
