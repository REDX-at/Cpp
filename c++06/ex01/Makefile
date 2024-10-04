CXX = c++
CXXFLAGS = -Wall -Wextra -Werror #-std=c++98
NAME = Serializer
SRCS = main.cpp Serializer.cpp data.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Serializer.hpp data.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)