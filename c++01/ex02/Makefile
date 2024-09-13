SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ptrref

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@echo "\033[92m√\033[0m \033[97m" $<

$(NAME): $(OBJ)
	@echo "\033[92m√\033[0m \033[97m" $<
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	@echo "\033[0m \033[97mObject Cleaned \033[92m√"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0m \033[97mObject Full Cleaned \033[92m√"

re: fclean $(NAME)

.PHONY: all clean fclean re