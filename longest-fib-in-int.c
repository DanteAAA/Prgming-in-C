// Generate Fibonacci numbers using variable length arrays

#include <stdio.h>

int main (void)
{
	int i, numFibs;

	printf ("How many Fibonacci numbers do you want? ");
	scanf  ("%i", &numFibs);

	int	Fibonacci[numFibs];

	Fibonacci[0] = 0;	// by definition
	Fibonacci[1] = 1;	// ditto

	for ( i = 2; i < numFibs; ++i )
	    Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for (i = 0; i < numFibs; ++i )
	    printf ("%llu  ", Fibonacci[i]);

	printf ("\n");

	return 0;
}
