/* Write a function called arraySum() that takes two
 * arguments: an integer array and the number of elements
 * in the array. Have the function return as its result
 * the sum of the elemnts in the array.                     */

#include <stdio.h>

arraySum(int rayman[], int x)
{
    int i, total = 0;

    for ( i = 0; i < x; ++i ) {
        total += rayman[i];
        printf ("%i: %i\n", i, total);
    }

    return total;
}

int main (void)
{
    int n, numOfElements = 5;
    int array[4];

    // 0 out array[4]
    for ( n = 0; n <= numOfElements; ++n ) {
       array[n] = 5;
       printf ("array[%i]: %i\n", n, array[n]);
    }

    printf("The total of the array is: %i\n", arraySum(array, numOfElements));

    return 0;
}
