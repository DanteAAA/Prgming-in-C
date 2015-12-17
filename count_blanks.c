// This program counts the amount of spaces in file
#include <stdio.h>

main()
{
    int c, b1 = 0;

    while ((c = getchar()) != EOF)
	if (c == ' ')
	    ++b1;
    printf("%i\n", b1);
}
