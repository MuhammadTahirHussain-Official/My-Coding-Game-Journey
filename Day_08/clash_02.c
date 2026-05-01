#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);
        ans += X;
    }
    if (ans%N == 0){
        printf("%d\n", ans/N);
    }else{
        printf("%.1f\n", (float)ans/N);
    }

    return 0;
}
