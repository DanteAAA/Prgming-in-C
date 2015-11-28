// Quadratic Equation
#include <stdio.h>

// Global Variables
int a, b, c;


void get_variables (void)
{
    printf ("What is a: ");
    scanf  ("%i", &a);

    printf ("What is b: ");
    scanf  ("%i", &b);

    printf ("What is c: ");
    scanf  ("%i", &c);
}

int absolute (int x)
{
    if ( x < 0 )
	x = -x;

    return (x);
}

int squareRoot (int x)
{
    const float epsilon = 0.00001;
    float	guess	= 1.0;

    while ( absoluteValue ( guess * guess - x ) >= epsilon )
	guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    get_variables();
    printf ("The quadratic solutions are:\nx = %i, x = %i.\n", a, b);

    return 0;
}
