#include <stdlib.h>
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            if (i == y && j == x)printf("+");
            else if (i == y)
                printf("-");
            else if (j == x)
                printf("|");
            else
                printf(".");
            }
            printf("\n");
        }
    return 0;
}
