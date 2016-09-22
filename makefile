all: fibonacci_cpp fibonacci_c

# C++
fibonacci_cpp: fibonacci.cpp
	clang++ -Weverything -Wno-c++98-compat -std=c++1y -o $@ $<

# C
fibonacci_c: fibonacci.c
	clang -Weverything -o $@ $<
