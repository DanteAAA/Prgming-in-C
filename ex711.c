/* Write a function called arraySum() that takes two
 * arguments: an integer array and the number of elements
 * in the array. Have the function return as its result
 * the sum of the elemnts in the array.                     */

#include <stdio.h>

arraySum(int rayman[], int x)
{
    int i, total;

    for ( i = 0; i < x; ++i ) {
        total += rayman[i];
    }

    return total;
}

int main (void)
{
    int n, numOfElements = 5;
    int array[4];

    for ( n = 0; n >= numOfElements; ++n ) {
        array[i] = 5;
    }

    printf("The total of the array is: %i\n", arraySum(array[4], numOfElements));

    return 0;
}
