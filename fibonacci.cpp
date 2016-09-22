#include <iostream>

unsigned int fibonacci(const unsigned int);

int main() {

	std::cout << fibonacci(5) << std::endl;

	return 0;
}

unsigned int fibonacci(const unsigned int n) {

	if (n == 1)
		return 1;

	return n * fibonacci(n - 1);
}
