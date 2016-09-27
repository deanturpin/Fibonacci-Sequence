#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main()
{
	for (unsigned int i = 0; i <= 14; ++i)
		printf("%d ", fibonacci(i));

	printf("\n");

	return 0l;
}

unsigned int fibonacci(const unsigned int n)
{

	return (
		n == 0ul ? 0ul :
		n == 1ul ? 1ul : fibonacci( n - 1ul ) + fibonacci( n - 2ul ) );
}
