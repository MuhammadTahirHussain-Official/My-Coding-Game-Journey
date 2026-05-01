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
    char log[5601] = "";
    scanf("%[^\n]", log);
    int len = strlen(log);

    int up = 0, down = 0;
    for(int i = 0; i < len; i++){
        if (log[i] == '(') up += 1;
        if (log[i] == ')') down += 1;
    }

    printf("%d\n", up - down);

    return 0;
}
