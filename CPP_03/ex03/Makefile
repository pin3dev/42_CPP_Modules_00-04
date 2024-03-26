# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 18:46:18 by pin3dev           #+#    #+#              #
#    Updated: 2024/01/22 18:46:29 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

CPP = c++

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp 

HEADER = ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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