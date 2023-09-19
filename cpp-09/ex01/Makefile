# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 14:11:15 by mustafakara       #+#    #+#              #
#    Updated: 2023/09/19 14:11:16 by mustafakara      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

SRC	 =	main.cpp \
		RPN.cpp

INC =	RPN.hpp


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