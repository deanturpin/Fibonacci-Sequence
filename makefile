# C++ rule
fibonacci.o: fibonacci.cpp
	clang++ -Weverything -Wno-c++98-compat -std=c++1y -o $@ $<
