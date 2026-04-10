# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myapaten <myapaten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 14:25:05 by mapatenk          #+#    #+#              #
#    Updated: 2026/04/10 15:40:26 by myapaten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
       	ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c \
       	ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_memcmp.c \
       	ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
       	ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_strjoin.c ft_substr.c \
       	ft_strtrim.c ft_split.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
    	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a
AR = ar rcs

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Archiving object files into $(NAME)"
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	@echo "Compiling $< into $@"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
