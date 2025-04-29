# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 13:22:17 by ocgraf            #+#    #+#              #
#    Updated: 2025/04/29 14:07:41 by ocgraf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c ft_bzero.c ft_memcmp.c \
		ft_strchr.c ft_strnstr.c ft_calloc.c ft_memcpy.c ft_strdup.c \
		ft_strrchr.c ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c \
		ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c ft_isascii.c \
		ft_putchar_fd.c ft_strlcat.c ft_tolower.c ft_isdigit.c ft_putendl_fd.c \
		ft_strlcpy.c ft_toupper.c ft_isprint.c ft_putnbr_fd.c ft_strlen.c \
		ft_itoa.c ft_putstr_fd.c ft_strmapi.c

BONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= libft.h

OBJ		= $(SRC:.c=.o)
OBJ_B	= $(BONUS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ) 
			ar rc $(NAME) $(OBJ) 
			ranlib $(NAME)

clean:
			rm -rf $(OBJ) $(OBJ_B)

fclean:		clean
			rm -rf $(NAME)

bonus			:	$(OBJ) $(OBJ_B)
					@ar rcs $(NAME) $(OBJ) $(OBJ_B)

re:			fclean all