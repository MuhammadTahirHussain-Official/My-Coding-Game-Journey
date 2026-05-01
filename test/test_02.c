#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", n);   // print starting value
    if(n != 1)printf(" ");
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;

        printf("%d", n);
        if(n != 1)printf(" ");
    }
    printf("\n");
    return 0;
}
