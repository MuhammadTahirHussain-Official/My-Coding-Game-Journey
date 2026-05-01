#include <stdio.h>

int main()
{
    char info[101];
    scanf("%s", info);

    int w, h;
    scanf("%d %d", &w, &h);

    int index = 0; // index for info bits

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int pixel;
            scanf("%d", &pixel);

            int bit = info[index] - '0'; // convert '0'/'1' to 0/1

            // Clear LSB and insert bit
            pixel = (pixel & ~1) | bit;

            printf("%d", pixel);
            if (j < w - 1) printf(" ");

            index++;
        }
        printf("\n");
    }

    return 0;
}
