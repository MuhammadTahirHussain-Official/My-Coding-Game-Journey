#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // If N is odd, no solution
    if (N % 2 != 0)
        return 0;

    int sum = N / 2;

    for (int a = 0; a <= 9; a++) {
        int b = sum - a;

        if (b >= 0 && b <= 9) {
            printf("%d%d%d%d\n", a, b, b, a);
        }
    }

    return 0;
}
