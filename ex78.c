// Quadratic Equation
#include <stdio.h>

// Global Variables
int a, b, c, x1, x2;

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

void quad_fml(int a, int b, int c)
{
    int bb, sqrt, top, t1, t2;

    bb = b * b;
    sqrt = bb * -4 * a * c;
    top = squareRoot(sqrt);
    t1 = -b + top;
    t2 = -b - top;
    x1 = t1 / 2a;
    x2 = t2 / 2a;
}

int main (void)
{
    get_variables();
    quad_fml(a, b, c);
    printf ("The quadratic solutions are:\nx = %i, x = %i.\n", x1, x2);

    return 0;
}
