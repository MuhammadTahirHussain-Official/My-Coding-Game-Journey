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

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    int sum = 0;
    for (int i = 0; i <= N; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
