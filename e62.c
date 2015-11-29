#include <stdio.h>

int main (void)
{
	int ratingCounters[10], n, i, response;

	for ( n = 0; n < 10; n++ )
	    ratingCounters[n] = 0;

	while (1){

            printf ("Enter your response\n");
            scanf  ("%i", &response);

	    if ( (response < 1 || response > 10) && ( response != 999) )
	        printf ("Bitch stay in range: %i is bad nigga.\n", response);
            else if ( response == 999 )
	        break;
	    else
	        ++ratingCounters[response];
	    }	

	printf ("\n\nRating  Number of Responses\n");
	printf ("------  -------------------\n");

	for ( i = 0; i < 10; i++ )
	    printf ("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}
