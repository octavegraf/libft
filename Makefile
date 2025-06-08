SRC =	ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c ft_bzero.c ft_memcmp.c \
		ft_strchr.c ft_strnstr.c ft_calloc.c ft_memcpy.c ft_strdup.c \
		ft_strrchr.c ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c \
		ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c ft_isascii.c \
		ft_putchar_fd.c ft_strlcat.c ft_tolower.c \ ft_tab_add_row.c \ 
		ft_isdigit.c ft_putendl_fd.c \ ft_strlcpy.c ft_toupper.c ft_isprint.c \ 
		ft_putnbr_fd.c ft_strlen.c \ ft_itoa.c ft_putstr_fd.c ft_strmapi.c

BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= libft.h

OBJ		= $(SRC:.c=.o)
OBJ_B	= $(BONUS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ) $(OBJ_B) 
			ar rc $(NAME) $(OBJ) $(OBJ_B)
			ranlib $(NAME)

clean:
			rm -rf $(OBJ) $(OBJ_B)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all