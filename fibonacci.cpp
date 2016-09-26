#include <iostream>

unsigned int fibonacci(const unsigned int);

int main() {

	std::cout << fibonacci(20) << std::endl;

	return 0;
}

unsigned int fibonacci(const unsigned int n) {

	return (
		n == 0 ? 0 :
		n == 1 ? 1 : fibonacci(n - 1) + fibonacci(n - 2)
	);
}
