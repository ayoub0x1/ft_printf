# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 21:04:56 by aymoulou          #+#    #+#              #
#    Updated: 2021/11/20 16:11:13 by aymoulou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_FILE = ft_printf_put_utils.c ft_printf_utils.c ft_printf_convert_utils.c \
			ft_convert_option.c ft_chose_convert.c ft_printf.c

OBJ_FILE = $(SRC_FILE:.c=.o)

all = $(NAME)

$(NAME):	$(OBJ_FILE)
	ar rc $(NAME) $(OBJ_FILE)

$(OBJ_FILE):	$(SRC_FILE)
	gcc -Wall -Wextra -Werror -c $(SRC_FILE)

clean :
	rm -rf $(OBJ_FILE)
fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
.PHONY : all clean fclean re
