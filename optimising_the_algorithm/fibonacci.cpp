#include <iostream>
#include <iomanip>

const unsigned int seq = 30;

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

		cout << "\nImplementation 1" << endl;

		string s;
		for (unsigned int i = 0; i <= seq; ++i)
			s += to_string(fibonacci(i)) + ' ';

		cout << s << endl;
		cout << "Calls " << callCount << endl;
	}
}

namespace imp2 {

	using namespace std;

	// Implemenation 2
	// ----------
	// Define a recursive Fibonacci routine
	// Call it iteratively

	unsigned int callCount2 = 0;

	unsigned int fibonacci(const unsigned int);
	unsigned int fibonacci(const unsigned int n) {

		using namespace std;
		++callCount2;

		return (	
				n == 0 ? 0 :
				n == 1 ? 1 :
				n == 2 ? 1 :
				fibonacci(n - 1) + fibonacci(n - 2)
			   );
	}

	void generateSequence();
	void generateSequence() {

		cout << "\nImplementation 2" << endl;

		string s;
		for (unsigned int i = 0; i <= seq; ++i)
			s += to_string(fibonacci(i)) + ' ';

		cout << s << endl;
		cout << "Calls " << callCount2 << endl;
	}
}

int main() {

	imp1::generateSequence();
	imp2::generateSequence();
	
	return 0;
}
