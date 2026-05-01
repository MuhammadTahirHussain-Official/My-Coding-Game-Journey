

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
    char name[256] = "";
    for (int i = 0; i < N; i++) {
        fgets(name, sizeof(name), stdin);  

        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n')
            name[len - 1] = '\0';

        char *comma = strchr(name, ',');  

        if (comma != NULL) {
            printf("%s\n", comma + 2); 
        } else {
            printf("N/A\n");
        }
    }


    return 0;
}
