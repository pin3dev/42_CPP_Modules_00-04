# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 21:42:30 by ivbatist          #+#    #+#              #
#    Updated: 2023/12/27 21:42:32 by ivbatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = Harl.cpp main.cpp

HEADER = Harl.hpp

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
