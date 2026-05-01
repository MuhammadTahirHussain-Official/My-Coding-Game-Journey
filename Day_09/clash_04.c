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
    for (int i = 0; i < 16; i++) {
        char line[17] = "";
        scanf("%[^\n]", line); fgetc(stdin);
        for(int j = 0; j < strlen(line); j++){
            if (line[j] == '1'){
                printf("#");
            }else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
