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

int main (void)
{
    get_variables();
    printf ("The quadratic solutions are:\nx = %i, x = %i.\n", a, b);

    return 0;
}
