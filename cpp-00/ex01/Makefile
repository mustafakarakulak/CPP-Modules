UNAME_S := $(shell uname -s)

NAME = phonebook
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -MD
SRC =	main.cpp		\
		PhoneBook.cpp	\
		Contact.cpp		\


OBJ = $(SRC:%.cpp=%.o)

DEP = $(SRC:%.cpp=%.d)

all: $(NAME)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp | $(OBJ_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all
