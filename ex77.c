/* Write a function that raises an integer to a postive integer power.
 * 	Call the function x_to_the_n taking two integer arguments x and n.
 * 	Have the function return a long int, which represents the results
 * 	of calculating x.						*/

#include <stdio.h>

int main (void)
{
	long x;
	int  i;

	printf ("This program will calculate x to the nth power.\n");
	printf ("Choose an x > 0: ");
	scanf  ("%li", &x);

	for ( i = 0; i < 3; ++i ) {
	    if ( x <= 0 ) {
		printf ("BITCH I SAID LESS THAN 0.\n");
		printf ("Try again bitch ass motherfucking: ");
		scanf  ("%li", &x);
	    }
	    else {
		break;
	    }
	}	

	if ( x <= 0 ) {
	    printf ("You are a fucking bitch.\n");
	    return 1;
	}

	// Test
	printf ("x: %li\n", x);
//	x_to_the_n();
}

//unsigned long x_to_the_n (unsigned int x, unsigned int n)
//{
//	return 

//}
