CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PmergeMe
SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = PmergeMe.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
