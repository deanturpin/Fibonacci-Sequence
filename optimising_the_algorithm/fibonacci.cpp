#include <iostream>
#include <iomanip>

namespace imp1 {

	using namespace std;

	// Implemenation 1
	// ----------
	// Define a recursive Fibonacci routine
	// Call it iteratively

	static unsigned int callCount = 0;

	unsigned int fibonacci(const unsigned int);
	unsigned int fibonacci(const unsigned int n) {

		using namespace std;
		++callCount;

		return (	
				n == 0 ? 0 :
				n == 1 ? 1 :
				n == 2 ? 1 :
				fibonacci(n - 1) + fibonacci(n - 2)
			   );
	}

	void generateSequence();
	void generateSequence() {

		cout << "Implementation 1" << endl;

		string s;
		for (unsigned int i = 0; i <= 14; ++i)
			s += to_string(imp1::fibonacci(i)) + ' ';

		cout << s << endl;
		cout << "Calls " << callCount << endl;
	}
}

int main() {

	imp1::generateSequence();
	
	return 0;
}
