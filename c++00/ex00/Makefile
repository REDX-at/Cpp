CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[92m√\033[0m \033[97m" $<
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@echo "\033[96m⌛\033[0m \033[97m" $<
	@$(CXX) $(CXXFLAGS) -c $<

clean:
	@echo "\033[91m×\033[0m \033[97m" $(OBJ)
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[91m×\033[0m \033[97m" $(NAME)
	@rm -f $(NAME)

re: fclean all
	@echo "\033[92m√\033[0m \033[97m" $(NAME)