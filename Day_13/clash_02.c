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
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int arr[n1 + n2];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);

    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr[n1 + i]);
    }

    int len = n1+n2;
    for(int i = 0; i <  len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    for (int i = 0; i < n1+n2; i++){
        printf("%d", arr[i]);
        if(i != n1 + n2 - 1) printf(",");
    }

    if(len == 0){
        printf("Empty");
    }
    return 0;
}
