# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 15:39:45 by mustafakara       #+#    #+#              #
#    Updated: 2023/09/13 15:39:46 by mustafakara      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC	 =	main.cpp \
		BitcoinExchange.cpp

INC =	BitcoinExchange.hpp


CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
		@$(CC) $(FLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) $(INC)
		@$(CC) $(FLAGS) $(OBJ) -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all