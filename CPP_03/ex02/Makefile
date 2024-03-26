# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 18:45:50 by pin3dev           #+#    #+#              #
#    Updated: 2024/01/22 18:46:43 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp 

HEADER = ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp

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