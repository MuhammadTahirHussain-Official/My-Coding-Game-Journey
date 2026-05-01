#include <stdio.h>

int main() {
    int n;
    char word[101];   

    scanf("%d", &n);

    scanf("%s", word);

    for (int i = 0; i < n; i++) {
        word[i] = (word[i] - 'a' - (i + 1) + 26) % 26 + 'a';
    }

    printf("%s\n", word);

    return 0;
}
