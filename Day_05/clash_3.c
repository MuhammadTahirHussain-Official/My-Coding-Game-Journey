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
    int gray_wolves;
    int black_wolves;
    scanf("%d%d", &gray_wolves, &black_wolves);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    int sheep = 4 * (gray_wolves + black_wolves);
    int remaining = sheep - (gray_wolves * 2) - (black_wolves * 3);

    printf("%d %d ", sheep, remaining);
    if (remaining >= 10){
        printf("Yes\n");
    }else{
        printf("No\n");
    }


    return 0;
}
