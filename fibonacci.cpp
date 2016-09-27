#include <iostream>

unsigned int fibonacci(const unsigned int);
unsigned int fibonacci(const unsigned int n) {

	using namespace std;

	return (	
		n == 0 ? 0 :
		n == 1 ? 1 :
		n == 2 ? 1 :
			fibonacci(n - 1) + fibonacci(n - 2)
	);
}


int main() {

	using namespace std;

	string s;
	for (unsigned int i = 0; i <= 14; ++i)
		s += to_string(fibonacci(i)) + ' ';

	cout << s << endl;
	
	return 0;
}
