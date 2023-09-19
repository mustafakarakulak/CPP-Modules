# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 14:11:15 by mustafakara       #+#    #+#              #
#    Updated: 2023/09/19 20:05:39 by mkarakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

SRC	 =	main.cpp \
		RPN.cpp

INC =	RPN.hpp


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