SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
HEADERS = Fixed.hpp
CPPFLAGS = -Wall -Wextra -std=c++98

NAME = Fixed

all: $(NAME)
 
$(NAME): $(OBJ)
	@echo "\033[92m√\033[0m \033[97m" $<
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@echo "\033[92m√\033[0m \033[97m" $<

clean:
	$(RM) $(OBJ)
	@echo "\033[0m \033[97mObject Cleaned \033[92m√"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0m \033[97mObject Full Cleaned \033[92m√"
re: fclean $(NAME)

.PHONY: all clean fclean re