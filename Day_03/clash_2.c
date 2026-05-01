// Radix sort is an algorithm that, after K iterations, sorts numbers by their last K digits. Rules: ● Numbers are compared digit-by-digit from right to left, up to K digits. ● During comparison, numbers with fewer than K digits are padded with leading zeros. The padding is reverted after the numbers are sorted. ● When numbers have the same last K digits, they maintain their original relative order. explain me the quesiton what it is saying

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int num[101];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    int exp = 1;   // 1, 10, 100, ...

    for (int pass = 0; pass < k; pass++)
    {
        int output[101];
        int count[10] = {0};

        // Count occurrences of digits
        for (int i = 0; i < n; i++)
        {
            int digit = (num[i] / exp) % 10;
            count[digit]++;
        }

        // Prefix sum (to keep stability)
        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Build output (RIGHT to LEFT for stability)
        for (int i = n - 1; i >= 0; i--)
        {
            int digit = (num[i] / exp) % 10;
            output[count[digit] - 1] = num[i];
            count[digit]--;
        }

        // Copy back
        for (int i = 0; i < n; i++)
            num[i] = output[i];

        exp *= 10;
    }

    // Final output
    for (int i = 0; i < n; i++)
        printf("%d\n", num[i]);

    return 0;
}
