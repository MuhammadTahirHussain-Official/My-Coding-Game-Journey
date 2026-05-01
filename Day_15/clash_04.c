#include <stdio.h>
int main()
{
    int x, first = 1;
    while (scanf("%d", &x) == 1)
    {
        if (x % 2 == 0)
        {
            x = x + 1;
        }
        printf("%d", x);
    }
    printf("\n");
    return 0;
}
