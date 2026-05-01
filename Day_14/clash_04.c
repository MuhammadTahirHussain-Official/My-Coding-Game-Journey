#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    fgetc(stdin); 
    char s[257];
    char best[257];
    double maxPercent = -1.0;
    for (int i = 0; i < n; i++) {
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0'; // remove newline
        int lower = 0;
        int total = strlen(s);
        for (int j = 0; j < total; j++) {
            if (s[j] >= 'a' && s[j] <= 'z')
                lower++;
        }
        double percent = (double) lower / total;
        if (percent > maxPercent) {
            maxPercent = percent;
            strcpy(best, s);
        }
    }
    printf("%s\n", best);
    return 0;
}
