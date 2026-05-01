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
    printf("Enter the total numbers you want to enter: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int A = 0;
        int B = 0;
        scanf("%d%d", &A, &B);
        long long total = A*A + B;
        printf("%lld", total);
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    // printf("answer\n");

    return 0;
}
