#include <iostream>
#include <iomanip>

const unsigned int seq = 30;

namespace bigo {

	using namespace std;

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
			s += to_string(bigo::fibonacci(i)) + ' ';

		cout << s << endl;
		cout << "Calls " << callCount << endl;
	}
}

int main() {

	bigo::generateSequence();
	return 0;
}
