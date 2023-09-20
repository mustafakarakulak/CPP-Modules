# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 14:11:18 by mustafakara       #+#    #+#              #
#    Updated: 2023/09/20 13:34:39 by mustafakara      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC	 =	main.cpp

INC =	PmergeMe.hpp


CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g
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