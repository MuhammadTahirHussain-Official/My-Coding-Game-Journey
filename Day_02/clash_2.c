//A diagonal of a polygon is defined as a segment joining any two non-consecutive vertices of the polygon.How many diagonals are there in a convex polygon with N vertices 
//For a polygon with N vertices, the total number of diagonals is: n*(n-3)/2

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    long long N;
    scanf("%lld", &N);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%lld\n", N*(N - 3)/ 2);

    return 0;
}
