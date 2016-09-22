#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main() {

	printf("%d\n", fibonacci(5));

	return 0;
}

unsigned int fibonacci(const unsigned int n) {

	if (n == 1)
		return 1;

	return n * fibonacci(n - 1);
}
