/* A matrix M with i rows, j columns can be transposed into a matrix N
 * having j rows and i columns by simply setting the values of N.ab
 * equal to the values of M.ba for all relevant values of a and b.
 *
 * a) Write a function transposeMatrix() that takes as an argument
 *    a 4 x 5 matrix and store results in the same 5 x 4 matrix.
 *    Also write a main() routine to test the function.             */

#include <stdio.h>

int main (void)
{
    void transposeMatrix ( int aa[4][5], int bb[5][4] );
    void displayMatrix (int matrix[5][5]);
    
    int sampleMatrix1[4][5] =
        {
            {  1,  2,  3,  4,  5 },
            {  6,  7,  8,  9, 10 },
            { 11, 12, 13, 14, 15 },
            { 16, 17, 18, 19, 20 }
        };

    int sampleMatrix2[5][4] =
        {
            { 100, 101, 103, 104 },
            { 105, 106, 107, 108 },
            { 109, 110, 111, 112 },
            { 113, 114, 115, 116 },
            { 117, 118, 119, 120 }
        };

    printf ("Here are our sample Matrices:\n");
    printf ("%5i\n", displayMatrix ( sampleMatrix1 );
}

void transposeMatrix(int aa[4][5], int bb[5][4]) // aa = [4][5]; bb = [5][4]
{
    int row, column, temp[5][5], x = 5, y = 5;

    for ( row = 0; row < 5; ++row ) {
        for ( column = 0; column < 5; ++column ) {
            temp[x][y] = aa[4][5];
            aa[4][5] = bb[5][4];
            bb[5][4] = temp[x][y];
        }
    }
}

void displayMatrxi(int matrix[5][5])
{
    int row, column;

    for ( row = 0; row < 5; ++row ) {
        for ( column = 0; column < 5; ++column ) {
            printf ("%5i", matrix[row][column]);
        }
    }
}
