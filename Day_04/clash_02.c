#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    scanf("%d", &n); fgetc(stdin);
    char u[101] = "";
    scanf("%[^\n]", u); fgetc(stdin);
    char v[101] = "";
    scanf("%[^\n]", v);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    int i = 0;
    float total = 0;
    while(u[i] != '\0' && v[i] != '\0'){
        // if (u[i] == ' ' || v[i] == ' ') continue;
        int one = u[i] - '0';
        int two = v[i] - '0';
        int diff = pow(two - one, 2);
        total += diff;
        i++;
    }

    int sign = (int)round(sqrt(total));
    printf("%d\n", sign);
    if ( sign <= 50){
        printf("Yes\n");
    }

    return 0;
}
