// Program to enerate the first 15 Fibonacci numbers
// BUT WITHOUT AN ARRAY!!!

#include <stdio.h>

int main (void)
{
	int index, x = 0, y = 1, z = 1;

	printf ("Fib #0: 0\n");

	for ( index = 1; index < 15; ++index ) {
	    z = x + y;
	    y = x;
	    x = z;
	    printf ("Fib #%i: %i\n", index, z);
	}

//	for ( i = 2; i < 15; ++i )
//	    Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

//	for ( i = 0; i < 15; ++i )
//	   printf ("%i\n", Fibonacci[i]);

	return 0;
}
