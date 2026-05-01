//output the tree of given dir as in test cases Input First Line: is single line string variable dir OUTPUT tree of directory

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
    char dir[101] = "";
    printf("Enter the file path: ");
    scanf("%[^\n]", dir);

    printf("The filr tree is given below\n");
    int len = strlen(dir);
    int tab = 0;
    for(int i = 0; i < len; i++ ){
        if(dir[i] == '/'){
            printf("\n");
            for (int j = 1; j <= tab; j++){
            printf("   ");
            }
            printf("|--");
            tab += 1;
        }
        else printf("%c", dir[i]);
    }


    return 0;
}
