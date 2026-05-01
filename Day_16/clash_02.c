#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int t, c;
        scanf("%d %d", &t, &c);

        if (t <= 0 || c <= 0 || t > 101 || c > 14) {
            printf("GLaDOS you filthy liar!\n");
        } else {
            printf("That's a cake!\n");
        }
    }

    return 0;
}
