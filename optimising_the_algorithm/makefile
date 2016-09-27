all: fibonacci.o complexity.o

fibonacci.o: fibonacci.cpp
	clang++ -Weverything -std=c++1y -o $@ $<

complexity.o: complexity.cpp
	clang++ -Weverything -std=c++1y -o $@ $<

clean:
	rm -f *.o
