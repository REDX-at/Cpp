SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = AMateria.hpp
NAME = programe

# Default target
all: $(NAME)

# colors
RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
WHITE = \033[37m

#where im i
wich:
	@echo "$(WHITE)Im in $(BLUE)c++04/ex03"

# Linking the object files into the final executable
$(NAME): $(OBJ)
	@echo "Linking object files into the executable: $(NAME)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# Rule to compile .cpp files into .o files

%.o: %.cpp $(HEADER)
	@echo "$(GREEN)Compiling $< $(WHITE) into $@"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	@echo "$(RED)Cleaning$(WHITE) up object files..."
	@rm -f $(OBJ)

# Full clean: object files and executable
fclean: clean
	@echo "$(RED)Cleaning $(WHITE)up executable: $(NAME)"
	@rm -f $(NAME)

# Rebuild everything
re: fclean all
