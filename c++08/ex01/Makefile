CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Span
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Span.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)