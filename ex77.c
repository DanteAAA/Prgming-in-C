// This program calculates x to the nth power

int (get_variables)
{
	static int x;
	static int n;

	printf ("What is your x: ");
	scanf  ("%i", &x);

	printf ("What is your n: ");
	scanf  ("%i", &n);
}

long unsigned x_to_the_n (void)
{
	for ( i = 0; i < n; ++i )
	    x *= x;

	return x;
}


int main (void)
{
	get_variables();
	x_to_the_n();

	printf ("%i to the %i power is: %lu", x, n, x_to_the_n());

	return 0;
}
