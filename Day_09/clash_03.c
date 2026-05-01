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
    scanf("%d", &N);
    int M;
    scanf("%d", &M);
    if (M < N) printf("%d\n", M);
    else printf("%d\n", N);

    return 0;
}
