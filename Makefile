# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iidzim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:01:15 by iidzim            #+#    #+#              #
#    Updated: 2019/10/18 17:02:59 by iidzim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_memccpy.c ft_memcmp.c ft_memmove.c\
	ft_putchar_fd.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlcpy.c\
	ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c\
	ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c\
	ft_memchr.c ft_memcpy.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c\
	ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
	ft_substr.c ft_toupper.c ft_split.c\

OBJ = $(SRC:.c=.o)

SRCB = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c\
		ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c\

OBJB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : 
	gcc -Wall -Wextra -Werror -c $(SRCB)
	ar rc $(NAME) $(OBJB)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean 
	rm -f $(NAME)

re: fclean all