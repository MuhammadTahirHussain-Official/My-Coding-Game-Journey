#include <stdio.h>

int main()
{
    char first_guess[6];
    char score[6];

    scanf("%5s", first_guess);
    scanf("%5s", score);

    for (int i = 0; i < 5; i++) {
        if (score[i] == 'C') {
            printf("%c", first_guess[i]);
        }
        else if (score[i] == 'B') {
            int low = 0;
            int high = first_guess[i] - 'A' - 1;
            int mid = (low + high + 1) / 2;
            printf("%c", 'A' + mid);
        }
        else { 
            int low = first_guess[i] - 'A' + 1;
            int high = 25;
            int mid = (low + high + 1) / 2;
            printf("%c", 'A' + mid);
        }
    }

    return 0;
}
