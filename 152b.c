#include <stdio.h>

/* count characters in input; 1st version */
int main (void)
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
	;					// This is a "null statement"
    printf("%.0f\n", nc);
}
