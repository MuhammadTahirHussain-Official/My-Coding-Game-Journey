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
    char S[10] = "";
    scanf("%[^\n]", S);
    int n = 0;
    for(int i = 0; i < 10; i++){
        if (n == 0) printf("(");
        if (n == 3) printf(")");
        if (n == 3) printf(" ");
        if (n == 6) printf("-");
        printf("%c", S[i]);
        n++;
    }

    return 0;
}
