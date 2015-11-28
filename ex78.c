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

int absoluteValue (int x)
{
    if ( x < 0 )
	x = -x;

    return (x);
}

float squareRoot (int x)
{
    const float epsilon = 0.00001;
    float	guess	= 1.0;

    while ( absoluteValue ( guess * guess - x ) >= epsilon )
	guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int quad_fml(void)
{
    int bb;

    bb = b * b;
    sqrt = bb * -4 * a * c;
    squareRoot(sqrt);

    return result;
}

int main (void)
{
    get_variables();
    printf ("The quadratic solutions are:\nx = %i, x = %i.\n", a, quad_fml());

    return 0;
}
