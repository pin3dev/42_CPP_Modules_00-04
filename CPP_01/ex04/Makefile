# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 21:40:59 by ivbatist          #+#    #+#              #
#    Updated: 2023/12/27 21:41:01 by ivbatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replacer

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = Replacer.cpp main.cpp

HEADER = Replacer.hpp

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
