#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/


int main() {
    int c;
    // Read character by character until end of file or newline
    while ((c = getchar()) != EOF && c != '\n') {
        if (isupper(c)) {
            putchar(tolower(c));
        } else if (islower(c)) {
            putchar(toupper(c));
        } else {
            putchar(c);
        }
    }
    putchar('\n');
    return 0;
}
