SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Animal.hpp
NAME = Animal

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all