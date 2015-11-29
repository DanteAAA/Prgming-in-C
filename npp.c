// Program tests n++ vs ++n

#include <stdio.h>

int main (void)
{
	int i, n;

        printf ("-----------\n");
        printf ("This is n++\n");
        printf ("-----------\n");

	for ( n = 1; n < 5; n++ )
	    printf ("%i\n", n);

        printf ("-----------\n");
        printf ("This is ++n\n");
        printf ("-----------\n");

	for ( n = 1; n < 5; ++n ) 
	    printf ("%i\n", n);

	return 0;
}
