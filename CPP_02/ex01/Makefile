# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 00:27:32 by pin3dev           #+#    #+#              #
#    Updated: 2024/01/06 00:27:33 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = float_int

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = Fixed.cpp main.cpp

HEADER = Fixed.hpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re