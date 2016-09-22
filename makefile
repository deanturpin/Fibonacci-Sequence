all: _cpp.o _c.o

# C++
_cpp.o: cpp.cpp
	clang++ -Weverything -Wno-c++98-compat -std=c++1y -o $@ $<

# C
_c.o: c.c
	clang -Weverything -o $@ $<

clean:
	rm -f *.o
