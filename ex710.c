/* Write a function prime() that returns 1 if its argument
   is a prime number and returns 0 others.                  */

#include <stdio.h>
#include <stdbool.h>

bool prime(int x)
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;
    bool xPrime;

    primes[0] = 2;
    primes[1] = 3;

    for ( p = 5; p <= 1000; p = p + 2 ) {
        isPrime = true;

        for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
            if ( p % primes[i] == 0 )
                isPrime = false;

        if ( isPrime == true ) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

//    printf ("\n\nTHIS IS X: %i\n\n", x);    //CHECK

    for ( i = 0; i < 50; ++i ) {
//        printf ("primes[%i]: %i\n", i, primes[i]);      // CHECK

        if ( primes[i] == x ) {
            xPrime = true;
	    break;
        }
        else {
            xPrime = false;
        }
    }

    return xPrime;
}

int main (void)
{
    int test;

    printf ("This program determines if a number is prime number or not.\nWhat number would you like to check?: ");
    scanf  ("%i", &test);

    printf ("Is %i prime?: %i\n", test, prime(test));

    if ( prime(test) == true )
        printf ("This number is prime AF!\n");
    else
        printf ("This number is not prime.\n");
}
