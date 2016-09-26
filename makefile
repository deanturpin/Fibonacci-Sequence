# C
fibonacci.o: fibonacci.c
	clang -Weverything -o $@ $<

clean:
	rm -f *.o
