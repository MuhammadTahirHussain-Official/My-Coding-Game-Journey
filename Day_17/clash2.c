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
    int r;
    scanf("%d", &r);
    int s;
    scanf("%d", &s);
    int n;
    scanf("%d", &n);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    double area = 3.14 * r * r;
    area = area / s;
    area = area * n;


    printf("%d\n", (int)area);

    return 0;
}
