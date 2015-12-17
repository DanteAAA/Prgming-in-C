// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main (void)
{
    int c, b1 = 0, t1 = 0, n1 = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++b1;
        if (c == '\t')
            ++t1;
        if (c == '\n')
            ++n1;
    printf("The following file has:\n");
    printf("%i spaces.\n", b1);
    printf("%i tabs.\n", t1);
    printf("%i lines.\n", n1);
}       
