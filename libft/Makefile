# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/26 18:24:51 by fbelda-h          #+#    #+#              #
#    Updated: 2021/03/13 20:36:41 by fbelda-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#creamos las variables, son solo nombres no tienen sentido hasta que se compila algo con ellos
CC= cc
CFLAGS= -o3 -Wall -Werror -Wextra
SRCS= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
	  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCS_BONUS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c
OBJ= $(SRCS:.c=.o)
OBJ_BONUS=$(SRCS_BONUS:.c=.o)
INCL= libft.h
NAME= libft.a

## regla patrón . genera archivos.o a partir de los .c
## $* variables automáticas $@sustituye al target y $< sustituye al source file

%.o:%.c $(INCL)
	$(CC) -c $(CFLAGS) $< -o $@
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

#no tienen target, se compilan make -loquesea-
.PHONY : clean fclean norma all re bonus
all: $(NAME)

clean:
	rm -f $(NAME) 
fclean:
	rm -f $(NAME) $(OBJ) $(OBJ_BONUS)
norma:
	norminette $(SRCS)
re: fclean all
bonus: $(NAME) $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

