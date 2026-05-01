#include <stdio.h>

int main()
{
    int x;
    int max, min;

    scanf("%d", &x);
    max = min = x;

    while (scanf("%d", &x) == 1)
    {
        if (x > max)
            max = x;

        if (x < min)
            min = x;
    }

    printf("%d\n", max / min);

    return 0;
}
