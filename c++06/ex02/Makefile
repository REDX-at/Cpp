CXX = c++
CXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = dynamic
SRCS = main.cpp Base.cpp DerivedA.cpp DerivedB.cpp DerivedC.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Base.hpp DerivedA.hpp DerivedB.hpp DerivedC.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)