#include <iostream>

int fibonacci(const unsigned int);

int main() {

	return fibonacci(5);
}

int fibonacci(const unsigned int n) {

	if (n == 1)
		return 1;

	return fibonacci(n - 1);
}
