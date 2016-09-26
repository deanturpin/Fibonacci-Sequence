all: fibonacci_cpp.o fibonacci.o

# C++
fibonacci_cpp.o: fibonacci.cpp
	clang++ -Weverything -Wno-c++98-compat -std=c++1y -o $@ $<

# C
fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<

clean:
	rm -f *.o
