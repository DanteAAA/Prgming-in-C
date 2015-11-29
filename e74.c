// Calculating the nth Triangular Number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i;
	static int triangularNumber = 0;

	for ( i = 1; i <= n; ++i )
	    triangularNumber += i;

	return triangularNumber;
}

int main (void)
{
	static int triangularNumber;

	printf ("The sum of 10 triangular numbers are: %i.\n", calculateTriangularNumber (10));
	printf ("The sum of 20 triangular numbers are: %i.\n", calculateTriangularNumber (20));
	printf ("The sum of 50 triangular numbers are: %i.\n", calculateTriangularNumber (50));

	return 0;
}
