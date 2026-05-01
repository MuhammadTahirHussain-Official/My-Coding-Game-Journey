#include <stdio.h>
#include <string.h>

int main()
{
    char X[101];
    scanf("%[^\n]", X);

    int left = 0;
    int right = strlen(X) - 1;

    while (left <= right)
    {
        if (left == right)
        {
            printf("%c", X[left]);   // middle character (odd length)
        }
        else
        {
            printf("%c", X[left]);
            printf("%c", X[right]);
        }
        left++;
        right--;
    }

    printf("\n");
    return 0;
}
