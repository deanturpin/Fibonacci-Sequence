all: fibonacci.o run

fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<

clean:
	rm -f *.o

run:
	./fibonacci.o
	./fibonacci.sh
	node fibonacci.js
	runhaskell fibonacci.hs
