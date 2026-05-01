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
    char integers[5001] = "";
    scanf("%[^\n]", integers);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
   int i = 0;
    while (integers[i] != '\0') {
        int sum = 0;

        while (integers[i] != ' ' && integers[i] != '\0') {
            sum += integers[i] - '0';
            i++;
        }

        printf("%d", sum);


        if (integers[i] == ' '){
             i++;
            if (integers[i] != '\0'){
                printf(" ");
            }
        }
           
    }

    printf("\n");

    return 0;
}
