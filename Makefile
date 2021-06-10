# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spatez <spatez@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 17:32:01 by spatez            #+#    #+#              #
#    Updated: 2021/06/11 00:46:50 by spatez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT = ft_atoi.c ft_bzero.c\
	ft_calloc.c ft_isalnum.c\
	ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c\
	ft_itoa.c ft_memccpy.c\
	ft_memchr.c ft_memcmp.c\
	ft_memcpy.c ft_memmove.c\
	ft_memset.c ft_putchar_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c\
	ft_putstr_fd.c \
	ft_strdup.c \
	ft_strjoin.c ft_strlcat.c\
	ft_strlcpy.c ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c \
	ft_strtrim.c ft_substr.c\
	ft_tolower.c ft_toupper.c\
	ft_strchr.c ft_strmapi.c ft_split.c ft_strrchr.c 
	
BONUS = ft_lstnew.c ft_lstadd_front.c\
ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c\
ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = gcc -Wall -Wextra -Werror
NAME = libft.a
OBJETS = $(FT:.c=.o)
OBJ_BNS = $(BONUS:.c=.o)

all: $(NAME)

bonus: $(NAME) $(OBJ_BNS)
	ar rc $(NAME) $(OBJETS) $(OBJ_BNS)

so:
	$(CC) -fPIC $(FT)
	gcc -shared -o libft.so $(OBJETS)

$(NAME): $(OBJETS)
	ar rc $(NAME) $(OBJETS)

$(OBJETS): $(FT)
	$(CC) -c $(FT) -I .
	
$(OBJ_BNS): $(BONUS)
	$(CC) -c $(BONUS) -I .

clean:
	rm -f $(OBJETS) $(OBJ_BNS)

fclean: clean
	rm -f $(NAME) $(OBJ_BNS)

re: fclean all
