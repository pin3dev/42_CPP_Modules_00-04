# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 08:10:15 by pin3dev           #+#    #+#              #
#    Updated: 2024/02/01 13:06:28 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalsBrains

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRC = Dog.cpp main.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re