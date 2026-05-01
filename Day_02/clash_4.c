#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;
    scanf("%d", &N);

    int original = N;    
    int flipped = 0;     

    while (N > 0) {
        int i = N % 10;
        int newDigit;


        if (i == 0) newDigit = 0;
        else if (i == 1) newDigit = 1;
        else if (i == 6) newDigit = 9;
        else if (i == 8) newDigit = 8;
        else if (i == 9) newDigit = 6;
        else {

            printf("no\n");
            return 0;
        }

        flipped = flipped * 10 + newDigit;
        N /= 10;
    }

    if (flipped == original) printf("no\n");  
    else printf("yes\n");                    

    return 0;
}
