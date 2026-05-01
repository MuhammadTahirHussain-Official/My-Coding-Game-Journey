// Julian's kids played with their alarm clock, and now the embedded projector displays the time ...
// well ... upside down on the wall : reversed horizontally and vertically !

// More explicitly, on the their room's wall the digits are now in reversed order, and :
// - 0 is now readable as O or 0,
// - 1 is now readable as i or 1,
// - 2 is still displayed 2,
// - 3 is now readable as E,
// - 4 is now readable as h,
// - 5 is now readable as S or 5,
// - 6 is now readable as 9,
// - 7 is now readable as L,
// - 8 is still displayed 8,
// - 9 is now readable as 6.

// Given a readableText, output the realTime formatted as H:mm

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char readable_text[6] = "";
    scanf("%[^\n]", readable_text);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int len = strlen(readable_text);
    for (int i = len - 1; i >= 0; i--){
        if (readable_text[i] == 'O' || readable_text[i] == '0') printf("0");
        if (readable_text[i] == 'i' || readable_text[i] == '1') printf("1");
        if (readable_text[i] == '2') printf("2");
        if (readable_text[i] == 'E') printf("3");
        if (readable_text[i] == 'h') printf("4");
        if (readable_text[i] == 'S' || readable_text[i] == '5') printf("5");
        if (readable_text[i] == '9') printf("6");
        if (readable_text[i] == 'L') printf("7");
        if (readable_text[i] == '8') printf("8");
        if (readable_text[i] == '6') printf("9");
        if (readable_text[i] == ':') printf(":");
    }

    return 0;
}
