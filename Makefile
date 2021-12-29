# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 13:45:47 by fbelda-h          #+#    #+#              #
#    Updated: 2021/12/29 13:47:35 by fbelda-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -o3 -Wall -Werror -Wextra -g
SRCS= main.c
OBJ= $(SRCS:.c=.o)
LIBFT= libft
INCL= push_swap.h
NAME= push_swap
## regla patrón. genera archivos.o a partir de los .c
## $* variables automáticas $@sustituye al target y $< sustituye al source file

%.o:%.c $(INCL)
	$(CC) -c $(CFLAGS) $< -o $@
$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)/*.o 
.PHONY : clean fclean norma all re bonus
all: $(NAME)

clean:
	rm -f $(NAME)
fclean:
	@$(MAKE) fclean -C $(LIBFT)
	rm -f $(NAME) $(OBJ) $(OBJ_BONUS)
norma:
	norminette $(SRCS)
re: fclean all
