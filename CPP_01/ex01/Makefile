# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 21:36:29 by ivbatist          #+#    #+#              #
#    Updated: 2023/12/27 21:36:32 by ivbatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = zombieHorde.cpp Zombie.cpp main.cpp

HEADER = Zombie.hpp

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
