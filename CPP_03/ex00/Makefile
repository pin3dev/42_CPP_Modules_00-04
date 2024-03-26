# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 09:34:35 by pin3dev           #+#    #+#              #
#    Updated: 2024/01/22 16:28:30 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = ClapTrap.cpp main.cpp 

HEADER = ClapTrap.hpp

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