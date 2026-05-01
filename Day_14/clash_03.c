#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int score = 0;

    for (int i = 0; i < N; i++) {
        int count = 0;

        // count occurrences of arr[i]
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count % 2 == 1)
            score += arr[i];   // odd → add
        else
            score -= arr[i];   // even → subtract
    }

    printf("%d\n", score);
    return 0;
}
