CXX = c++ -std=c++98 -Wall -Wextra -Werror

all: main

main: main.o
	$(CXX) -o main main.o

main.o: main.cpp

clean:
	rm -f main main.o