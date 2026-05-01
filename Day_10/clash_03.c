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
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int total = 0;
    if (a % 2 == 0)total += a;
    else total -= a;
    if (b % 2 == 0)total += b;
    else total -= b;
    if (c % 2 == 0)total += c;
    else total -= c;

    printf("%d\n", total);

    return 0;
}
