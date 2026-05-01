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
    int m;
    char row[m + 1];
    scanf("%d%d", &n, &m); fgetc(stdin);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", row); fgetc(stdin);
        for (int j = 0; j < m; j++) {
            if (row[j] == 'M') {
                ans++;
            }
        }
    }
    
    printf("%d\n", ans);

    return 0;
}
