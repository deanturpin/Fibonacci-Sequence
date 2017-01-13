#include <stdio.h>

unsigned int fibonacci(const unsigned int);

int main()
{
	printf("c\t%d\n", fibonacci(14));

	return 0l;
}

unsigned int fibonacci(const unsigned int n)
{

	return (
		n < 2 ? n : 
			fibonacci( n - 1ul ) + fibonacci( n - 2ul )
	);
}
