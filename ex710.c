/* Write a function prime() that returns 1 if its argument
   is a prime number and returns 0 others.                  */

#include <stdio.h>

prime(int x)
{
    int p, i, primes[100], primeIndex = 2;
    bool isPrime, xPrime;

    primes[0] = 2;
    primes[1] = 3;

    for ( p = 5; p <= 100; p = p + 2 ) {
        isPrime = true;

        for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
            if ( p % primes[i] == 0 )
                isPrime = false;

        if ( isPrime == true ) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0; i < 100; ++i ) {
        if ( primes[i] = x )
            xPrime = true;
            return true;

        else
            xPrime = false;
            return false;
    }            
}

int main (void)
{
    int test;

    printf ("This program determines if a number is prime number or not.\nWhat number would you like to check?: ");
    scanf  ("%i", &test);

    if ( prime(test) == 1 )
        printf ("This number is prime AF!\n");
    else
        printf ("This number is not prime.\n");
}
