# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smercado <smercado@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 16:23:55 by smercado          #+#    #+#              #
#    Updated: 2024/06/20 17:19:08 by smercado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
BONUS = .bonus
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
			ft_isascii.c ft_isprint.c ft_strlen.c\
			ft_memset.c ft_bzero.c ft_memcpy.c\
			ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c\
			ft_memcmp.c ft_strnstr.c ft_atoi.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c\
			ft_split.c ft_itoa.c ft_strmapi.c\
			ft_striteri.c ft_putstr_fd.c ft_strdup.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_calloc.c
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o\
			ft_isascii.o ft_isprint.o ft_strlen.o \
			ft_memset.o ft_bzero.o ft_memcpy.o\
			ft_memmove.o ft_strlcpy.o ft_strlcat.o\
			ft_toupper.o ft_tolower.o ft_strchr.o\
			ft_strrchr.o ft_strncmp.o ft_memchr.o\
			ft_memcmp.o ft_strnstr.o ft_atoi.o\
			ft_substr.o ft_strjoin.o ft_strtrim.o\
			ft_split.o ft_itoa.o ft_strmapi.o\
			ft_striteri.o ft_putstr_fd.o ft_strdup.o\
			ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o\
			ft_calloc.o


SRCBONUS = ft_lstsize_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c

BONUSOBJS = ft_lstsize_bonus.o ft_lstnew_bonus.o ft_lstadd_front_bonus.o


TOUCH = touch
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RANLIB = ranlib

all : $(NAME)

bonus: $(BONUS)

$(BONUS): $(HEAD) $(BONUSOBJS) $(OBJS)
	$(AR) $(NAME) $(BONUSOBJS)
	$(RANLIB) $(NAME)
	@$(TOUCH) $(BONUS)

$(NAME):	$(OBJS) $(HEAD)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

%.o : %.c $(HEAD) Makefile
	$(CC) -I. $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re
