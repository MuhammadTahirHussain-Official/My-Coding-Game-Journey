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
    char s[28] = "";
    scanf("%[^\n]", s);

    int temp[26] = {0};
    for(int i = 0; i < 26; i++){
        int x = s[i] - 'a' ;
        temp[x]++;
    }
    
    for(int i = 0; i < 26; i++){
        if(temp[i] == 0){
            printf("%c", 'a' + i);
        }
    }

    return 0;
}
