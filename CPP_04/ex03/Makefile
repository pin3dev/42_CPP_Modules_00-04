# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 16:32:05 by pin3dev           #+#    #+#              #
#    Updated: 2024/02/01 13:15:59 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interfaces

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRC = AMateria.cpp main.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp 
OBJ = $(SRC:.cpp=.o)

HEADER = AMateria.cpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp 

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