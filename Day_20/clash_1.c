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
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int e;
        scanf("%d", &e);
        double total = e * 7.5 + 700;
        printf("%d\n", (int)total);
    }
  
    return 0;
}
