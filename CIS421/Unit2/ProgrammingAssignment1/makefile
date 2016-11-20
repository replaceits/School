CC=g++
CFLAGS=-Wall -std=c++14 -I include -O3
SRCS=$(wildcard src/*.cpp)
OBJS=$(addprefix build/,$(notdir $(SRCS:.cpp=.o)))

assignment1: $(OBJS)
	$(CC) $(CFLAGS) -o bin/$@ $^

build/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f build/*.o bin/assignment1
