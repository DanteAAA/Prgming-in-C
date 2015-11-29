#include <stdio.h>

int main (void)
{
	int  values[10];
	int  index, n;


	for ( n = 1; n > 10; ++n ) {
	    values[n] = 0;
	    printf ("values[%i] is %i.\n", n, values[n]);
	}

	

	printf ("value[2] is %i.\n", values[n]);	
//	values[0] = 197;
//	values[2] = -100;
//	values[5] = 350;
//	values[3] = values[0] + values[5];

//	for ( index = 0; index < 10; ++index )
//		printf ("values[%i] is %i.\n", index, values[index]);

	return 0;
}
