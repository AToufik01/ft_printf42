# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 12:00:31 by ataoufik          #+#    #+#              #
#    Updated: 2023/11/17 10:23:22 by ataoufik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGG = -Wall -Wextra -Werror
RM = rm -f
SRC= ft_print_str.c ft_print_d_i.c ft_print_nhxd.c ft_print_u.c \
 ft_print_hdadrr.c ft_print_c.c ft_convert.c ft_printf.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGG) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
