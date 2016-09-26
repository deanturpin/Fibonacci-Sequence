#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main() {

	printf("%d\n", fibonacci(45));

	return 0;
}

unsigned int fibonacci(const unsigned int n) {

	return (
		n == 0 ? 0 :
		n == 1 ? 1 : fibonacci(n - 1) + fibonacci(n - 2)
	);
}
