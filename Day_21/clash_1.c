#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char t[100] = "";
    scanf("%[^\n]", t);
    char u[100], l[100];
    int j = 0, k = 0;
    for(int i = 0; i < strlen(t); i++){
        if(isupper(t[i])){
            u[j] = t[i];
            j++;
        }else{
            l[k] = t[i];
            k++;
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%s\n", u);
    printf("%s\n", l);

    return 0;
}
