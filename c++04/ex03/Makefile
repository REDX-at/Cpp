SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = AMateria.hpp
NAME = programe

# Default target
all: $(NAME)

# Linking the object files into the final executable
$(NAME): $(OBJ)
	@echo "Linking object files into the executable: $(NAME)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# Rule to compile .cpp files into .o files
%.o: %.cpp $(HEADER)
	@echo "Compiling $< into $@"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	@echo "Cleaning up object files..."
	@rm -f $(OBJ)

# Full clean: object files and executable
fclean: clean
	@echo "Cleaning up executable: $(NAME)"
	@rm -f $(NAME)

# Rebuild everything
re: fclean all
