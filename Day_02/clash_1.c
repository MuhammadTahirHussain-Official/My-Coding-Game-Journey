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
    scanf("%d", &N); fgetc(stdin);
    char string[11] = "";
    scanf("%[^\n]", string);

    int i = 0;
    while(i < N){
        printf("%s", string);
        i++;
    }
    if (N == 0) printf("empty"); 

    return 0;
}
