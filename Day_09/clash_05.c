#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n); 
    fgetc(stdin);
    int total = 0;
    int ace_count = 0;
    bool has_ace = false;
    bool has_ten_card = false;
    for (int i = 0; i < n; i++) {
        char p[4] = "";
        scanf("%[^\n]", p); 
        fgetc(stdin);
        if (p[0] == 'A') {
            total += 11;
            ace_count++;
            has_ace = true;
        } 
        else if (p[0] == 'K' || p[0] == 'Q' || p[0] == 'J') {
            total += 10;
            has_ten_card = true;
        } 
        else {
            int value = atoi(p);
            total += value;
            if (value == 10) {
                has_ten_card = true;
            }
        }
    }
    while (total > 21 && ace_count > 0) {
        total -= 10;
        ace_count--;
    }
    if (n == 2 && has_ace && has_ten_card && total == 21) {
        printf("Blackjack\n");
    }
    else if (total > 21) {
        printf("Bust\n");
    }
    else {
        printf("%d points\n", total);
    }
    return 0;
}
