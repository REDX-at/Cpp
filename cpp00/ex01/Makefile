CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

clean:
	rm -f main