# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgodonoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 16:34:31 by cgodonoa          #+#    #+#              #
#    Updated: 2016/12/28 13:38:44 by cgodonoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCCW = gcc -Wall -Wextra -Werror
SRC =	ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_strrchr.c		\
		ft_atoi.c ft_isdigit.c ft_memcpy.c ft_strcmp.c ft_strncat.c			\
		ft_strstr.c ft_bzero.c ft_isprint.c ft_memmove.c ft_strcpy.c		\
		ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_memset.c		\
		ft_strdup.c ft_strncpy.c ft_toupper.c ft_isalpha.c ft_memchr.c		\
		ft_strcat.c ft_strlcat.c ft_strnstr.c								\
		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c		\
		ft_striter.c ft_striteri.c ft_strmap.c ft_putchar.c ft_putstr.c		\
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c		\
		ft_strtrim.c ft_putnbr.c ft_strsplit.c ft_itoa.c ft_putendl.c		\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
		ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c		\
		ft_lstdel.c	ft_lstrevers.c ft_lstfree.c								\
		ft_swap.c ft_strlcpy.c ft_str_is_printable.c ft_strupcase.c			\
		ft_strlowcase.c	ft_count_digit.c ft_itoa_base.c						\
		ft_reverse_bits.c ft_print_bits.c
		
OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(GCCW) -I./includes -c $(SRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJECT)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
