#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main()
{

	printf("%d\n", fibonacci(45ul));

	return 0l;
}

unsigned int fibonacci(const unsigned int n)
{

	return ( n == 0ul ? 0ul :
		 n == 1ul ? 1ul : fibonacci( n - 1ul ) + fibonacci( n - 2ul ) );
}
