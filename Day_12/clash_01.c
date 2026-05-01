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
    scanf("%d", &N);
    int K;
    scanf("%d", &K);
    int n = 0;
    for (int i = 0; i < N; i++) {
        int NUM;
        scanf("%d", &NUM);
        if(NUM % K == 0) n++;
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", n);

    return 0;
}
