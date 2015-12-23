#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdebord <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/18 14:56:54 by cdebord           #+#    #+#              #
#    Updated: 2015/12/18 18:00:07 by cdebord          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

CFLAGS = -Wall -Wextra -Werror

HEADERS = -I Includes/

LIB =  LIB/libft.a

SRC = ft_add_char.c	ft_draw_id.c ft_init_map.c ft_put_grid.c\
	ft_add_tetri.c ft_fill_sqrt.c ft_is_valid.c	ft_resolv.c\
	ft_check_place.c ft_fnd_tetri.c	ft_list_size.c ft_test.c\
	ft_cmp.c ft_free.c	ft_main.c main.c ft_create_map.c\
	ft_indice.c	ft_pos_sqr.c ft_delete.c ft_init.c\
	ft_print.c

OBJ = $(SRC:.c=.o)

$(NAME):
	gcc -c $(CFLAGS) $(SRC) $(HEADERS)
	gcc -o $(NAME) $(CFLAGS) $(SRC) $(HEADERS) $(LIB)

all: $(NAME) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
