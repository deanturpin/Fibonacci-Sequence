The [Fibonacci sequence](https://en.wikipedia.org/wiki/Fibonacci_number)
implemented in multiple languages:
- C
- Bash
- Haskell
- Node.js

### Build and run
```bash
$ make clean
rm -f *.o
```

```make``` builds and runs everything.
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
### Dependencies
```
clang
nodejs
ghc # Haskell
```

