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

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int i = 0;
    while(1){
        if(i % 70 == a && i % 99 == b){
            break;
        }
        i++;
    }
    printf("%d", i);

    return 0;
}
