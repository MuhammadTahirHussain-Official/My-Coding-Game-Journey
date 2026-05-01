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
    int p;
    scanf("%d", &p);
    int h;
    scanf("%d", &h);
    int r;
    scanf("%d", &r);

    int result = p * h;
    if(result > r) printf("YES");
    else if (result == r) printf("BARELY");
    else printf("NO");

    return 0;
}
