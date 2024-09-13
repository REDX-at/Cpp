SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
HEADERS = Bureaucrat.hpp
NAME = Bureaucrat

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
