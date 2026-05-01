#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int leg1;
    scanf("%d", &leg1);
    int leg2;
    scanf("%d", &leg2);
    int ans = round(sqrt(pow(leg1, 2) + pow(leg2, 2)));
    printf("%d\n", ans);

    return 0;
}
