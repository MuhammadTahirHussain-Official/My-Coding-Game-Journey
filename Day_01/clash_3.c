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
    int N;
    printf("Enter the no of element: ");
    scanf("%d", &N);

    long long sum = 0;
    for (int i = 0; i < N ; i++)
    {
        sum += i;
        sum += i*i;
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    // int total = sum + sqSUm;
    printf("the sum is: %d\n", sum);

    return 0;
}
