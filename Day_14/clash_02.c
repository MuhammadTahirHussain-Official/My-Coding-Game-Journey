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
    char number[1025] = "";
    scanf("%[^\n]", number);

    for(int i = 0; i < strlen(number); i++){
        int num = number[i] - '0';
        for(int j = 0; j < num; j++){
            printf("%d", num);
        }
    }
    printf("\n");
    return 0;
}
