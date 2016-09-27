.SILENT:

all: fibonacci.o fibonacci_cpp.o run

# Build rules

fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<

fibonacci_cpp.o: fibonacci.cpp
	clang++ -Weverything -o $@ $<

clean:
	rm -f *.o

# Run rules

run:
	./fibonacci.o
	./fibonacci_cpp.o
	./fibonacci.sh
	node fibonacci.js
	runhaskell fibonacci.hs
