CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = Account
HEADERS = Account.hpp
SRC = Account.cpp test.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[92m√\033[0m \033[97m" $<
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADERS)
	@echo "\033[96m⌛\033[0m \033[97m" $<
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "\033[91m×\033[0m \033[97m" $(OBJ)
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[91m×\033[0m \033[97m" $(NAME)
	@rm -f $(NAME)

re: fclean allacc