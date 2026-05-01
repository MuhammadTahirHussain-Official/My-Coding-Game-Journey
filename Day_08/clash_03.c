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
    int num;
    scanf("%d", &num); fgetc(stdin);
    char sentence[201] = "";
    scanf("%[^\n]", sentence);
    int len = strlen(sentence);
    if (num % 2 == 0) printf("%s\n", sentence);
    else{
        for(int i = len - 1; i >= 0; --i){
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
