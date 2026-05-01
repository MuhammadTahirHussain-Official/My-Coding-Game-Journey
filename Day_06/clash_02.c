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
    char s[1002] = "";
    scanf("%s", s);
    int len = strlen(s);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int a = 0, c = 0, g = 0, t = 0;
    for (int i = 0; i < len; i++) {
        if(s[i] == 'A') a++;
        if(s[i] == 'C') c++;
        if(s[i] == 'G') g++;
        if(s[i] == 'T') t++;
    }

    printf("%d %d %d %d\n", a, c, g, t);

    return 0;
}
