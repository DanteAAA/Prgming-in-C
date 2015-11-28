// This program calculates x to the nth power

#include <stdio.h>

// Global Variables since I don't know how to only allow them
// in functions, and not globally

	int i;
	int x;
	int n;

int get_variables (void)
{
	printf ("What is your x: ");
	scanf  ("%i", &x);

	printf ("What is your n: ");
	scanf  ("%i", &n);

	return (x, n);
}

long unsigned x_to_the_n (int x, int n)
{
	for ( i = 0; i < n; ++i )
	    x *= x;

	return x;
}

void print_output (void)
{
	printf ("%i to the %i power is: %lu", x, n, x_to_the_n());
}

int main (void)
{
	get_variables();
	x_to_the_n(x, n);

	print_output();

	return 0;
}
