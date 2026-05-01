#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char unique[100][21];  
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        char num[21];
        scanf("%s", num);

        // ---- Remove leading zeros ----
        int k = 0;
        while (num[k] == '0') {
            k++;
        }

        char clean[21];

        if (k == strlen(num)) {
            // number was all zeros
            strcpy(clean, "0");
        } else {
            strcpy(clean, num + k);
        }

        // ---- Check if already present ----
        int isDistinct = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (strcmp(unique[j], clean) == 0) {
                isDistinct = 0;
                break;
            }
        }

        // ---- Store if unique ----
        if (isDistinct) {
            strcpy(unique[uniqueCount], clean);
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);
    return 0;
}
