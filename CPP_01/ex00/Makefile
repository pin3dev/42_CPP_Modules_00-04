# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 21:35:02 by ivbatist          #+#    #+#              #
#    Updated: 2023/12/27 21:35:04 by ivbatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CFLAGS = -Wall -Wextra -Werror -std=c++98 

CPP = c++

SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

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
