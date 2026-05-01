#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0;
    long long odd = 1;
    int count = 0;

    while (count < n) {
        sum += odd;
        odd += 2;
        count++;
    }

    printf("%lld\n", sum);

    return 0;
}
