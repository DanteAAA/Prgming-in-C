#include <stdio.h>

int main (void) {

	int number;

	printf ("What number would you like to divide by 2?: ");
	scanf  ("%i", &number);

	printf ("\n");
	printf ("%i divided by 2 is %i!\n", number, number%2);

	return 0;
}
