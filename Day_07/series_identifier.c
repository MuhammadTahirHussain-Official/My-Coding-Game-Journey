#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char arr[257];
    scanf("%[^\n]", arr);

    int nums[3];
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        if (isdigit(arr[i])) {
            nums[count++] = arr[i] - '0';
            if (count == 3) break;
        }
    }

    if (count < 3) {
        printf("Random\n");
        return 0;
    }

    int d1 = nums[1] - nums[0];
    int d2 = nums[2] - nums[1];

    if (d1 == d2) {
        printf("Arithmetic Progression\n");
        return 0;
    }

    if (nums[0] != 0 && nums[1] != 0) {
        int r1 = nums[1] / nums[0];
        int r2 = nums[2] / nums[1];
        if (r1 == r2) {
            printf("Geometric Progression\n");
            return 0;
        }
    }

    printf("Random\n");
    return 0;
}
