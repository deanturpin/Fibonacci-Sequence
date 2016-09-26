The [Fibonacci sequence](https://en.wikipedia.org/wiki/Fibonacci_number) implemented in various languages:
- C
- Bash
- Haskell
- Node.js

```bash
$ make clean
rm -f *.o
```
```bash
$ make
clang -Weverything -o fibonacci.o fibonacci.c
./fibonacci.o
55
./fibonacci.sh
55
node fibonacci.js
55
runhaskell fibonacci.hs
55
```
