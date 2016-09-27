.SILENT:

all: fibonacci.o fibonacci_cpp.o run

fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<

fibonacci_cpp.o: fibonacci.cpp
	clang++ -Weverything -o $@ $<

clean:
	rm -f *.o

run:
	echo 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
	./fibonacci.o
	./fibonacci_cpp.o
	./fibonacci.sh
	node fibonacci.js
	runhaskell fibonacci.hs
