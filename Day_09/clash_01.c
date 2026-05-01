// tell the if the sum has the unique digits

#include <stdio.h>

int main() {
    int N;
    long long x, sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &x);
        sum += x;
    }

    int digit_count[10] = {0};

    if (sum == 0) {
        printf("True");
        return 0;
    }

    while (sum > 0) {
        int digit = sum % 10;
        if (digit_count[digit] > 0) {
            printf("False");
            return 0;
        }
        digit_count[digit]++;
        sum /= 10;
    }

    printf("True");
    return 0;
}

