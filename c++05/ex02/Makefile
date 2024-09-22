CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = AForm
SRCS = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all