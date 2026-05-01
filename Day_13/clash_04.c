#include <stdio.h>
#include <string.h>

int main()
{
    char m[1001];
    char k[53];
    fgets(m, sizeof(m), stdin);
    fgets(k, sizeof(k), stdin);
    m[strcspn(m, "\n")] = '\0';
    k[strcspn(k, "\n")] = '\0';
    int kLen = strlen(k);
    for (int i = 0; m[i] != '\0'; i++) {
        for (int j = 0; j < kLen; j++) {
            if (m[i] == k[j]) {
                m[i] = k[(j + 1) % kLen];
                break;}}}
    printf("%s\n", m);
    return 0;
}
