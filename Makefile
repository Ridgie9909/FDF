# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/30 10:18:40 by rdube             #+#    #+#              #
#    Updated: 2018/08/06 16:41:16 by rdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fdf

SRC =	main.c \
		key.c \
		draw.c \
		point.c \
		init.c \
		drawline.c \
		read.c \
		calculate.c \
		info.c \
		expose.c \
		color.c \
		utils.c \
		close.c

OBJ =	$(%.c,obj/%.o$(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc -Wall -Werror -Wextra -L libft/ -lft -L/usr/local/lib -lmlx -framework OpenGL -framework Appkit $(SRC) -o $(NAME)

obj/%.o: %.c
	mkdir obj
	gcc -Wall -Werror -Wextra -c $< -o $@

clean:
	/bin/rm -rf obj/
	make -C libft/ clean

fclean:
	/bin/rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

tets: re
	.fdf
