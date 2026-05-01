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
    char s[257] = "";
    scanf("%[^\n]", s);
    int pos = 0, neg = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '+') pos++;
        else neg++;
    }
    printf("%d\n", pos - neg);

    return 0;
}
