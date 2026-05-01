// find the area of the trapezium the formula for the area of the trapezium is 1/2(a + b)h
// a = length of the first parallel side
// b = length of the second parallel side
// h = height (the perpendicular distance between the parallel sides)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    printf("length of the first parallel side: ");
    scanf("%d", &a);
    printf("length of the second parallel side: ");
    int b;
    scanf("%d", &b);
    printf("Perpendicular distance between the parallel sides: ");
    int h;
    scanf("%d", &h);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("The area of the trapezium is: %.1f\n", (float)1/2*(a+b)*h);

    return 0;
}
