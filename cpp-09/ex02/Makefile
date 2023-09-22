UNAME_S := $(shell uname -s)

NAME = PmergeMe

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -Wpedantic -Wshadow -MMD

SRC = \
	main.cpp

OBJ = $(SRC:%.cpp=%.o)

DEP = $(SRC:%.cpp=%.d)

PHONY := all
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

PHONY += clean
clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

PHONY += fclean
fclean: clean
	rm -rf $(NAME)

PHONY += re
re: fclean all


.PHONY: $(PHONY)
