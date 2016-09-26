#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main() {

	printf("%d\n", fibonacci(5));

	return 0;
}

unsigned int fibonacci(const unsigned int n) {

	return (
		n == 0 ? 0 :
		n == 1 ? 1 :
		n == 2 ? 2 : 
		n * fibonacci(n - 1)
	);
}
