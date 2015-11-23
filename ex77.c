/* Write a function that raises an integer to a postive integer power.
 *  *      Call the function x_to_the_n taking two integer arguments x and n.
 *   *      Have the function return a long int, which represents the results
 *    *      of calculating x.                                               */
 
#include <stdio.h>

int get_x(void)
{
    static long x;

    // Get x
    printf ("This program will calculate x to the nth power.\n");
    printf ("Choose an x > 0: ");
    scanf  ("%li", &x);

    return x;
}

int test(long t)
{
    unsigned i;

    for ( i = 0; i < 3; ++i ) {
        if ( t <= 0 ) {
            printf ("BITCH I SAID GREATER THAN 0.\n");
            printf ("Try again bitch ass motherfucking: ");
            scanf  ("%li", &t);
        }
        else {
            break;
        }
    }      
 
    if ( t <= 0 ) {
        printf ("You are a fucking bitch.\n");
    
        return 1;
    }
   
}

int get_n(void);
{
    static long n;

    // Get n
    printf ("To what power: ");
    scanf  ("%li", n);

    return n;
}


static long x_to_the_n(void)
{
    static long result;

    for ( i = 0; i > n; ++i )
        result *= x;
    
    return result;
}

void display()
{
    char top[1];
    
    switch (n)
    {
        case "1":
            top[] = "st";
        case "2":
            top[] = "nd";
        case "3":
            top[] = "rd";
        default:
            top[] = "th";
    }

    printf ("%li to the %i%s power is: \n", x, n, top[], result);
}

int main (void)
{
    get_x();
    test(x);

    get_n();
    test(n);

    x_to_the_n();

    display();
}
