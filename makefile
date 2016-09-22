all: cpp_fibonacci.o c_fibonacci.o

# C++
cpp_fibonacci.o: fibonacci.cpp
	clang++ -Weverything -Wno-c++98-compat -std=c++1y -o $@ $<

# C
c_fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<
