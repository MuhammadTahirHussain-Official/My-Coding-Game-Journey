#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char TEXT[1001];

    // Read N and clear the buffer to handle the newline
    if (scanf("%d", &N) != 1) return 0;
    fgetc(stdin); 

    // Read the full line of text
    if (scanf("%[^\n]", TEXT) == 0) return 0;

    int len = strlen(TEXT);

    // The outer loop determines where each line starts
    // It should stop when there isn't enough text left to make a full window
    for (int i = 0; i <= len - N; i++) {
        
        // The inner loop prints N characters starting from index 'i'
        for (int j = 0; j < N; j++) {
            printf("%c", TEXT[i + j]);
        }
        
        printf("\n");
    }

    return 0;
}
