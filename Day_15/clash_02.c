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
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int k = 65;
        for(int j = 0; j <= i; j++){
            printf("%c", k);
            k += 1;
        }
        printf("\n");
    }

    return 0;
}
