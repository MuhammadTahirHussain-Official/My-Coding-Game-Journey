#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int L; // Width of one letter
    printf("Enter the width of one letter: ");
    scanf("%d", &L);
    int H; // Height of the letters
    printf("Enter the height of the letter: ");
    scanf("%d", &H); fgetc(stdin);
    
    printf("Enter the text: ");
    char T[257] = ""; // The text we want to convert to ASCII art
    scanf("%[^\n]", T); fgetc(stdin);

    // We process the ASCII art row by row
    for (int i = 0; i < H; i++) {
        char ROW[1025] = "";
        scanf("%[^\n]", ROW); fgetc(stdin);

        // For each character in our input text T...
        for (int j = 0; j < strlen(T); j++) {
            int index;
            char c = toupper(T[j]); // Convert to uppercase to match A-Z

            if (c >= 'A' && c <= 'Z') {
                index = c - 'A'; // Calculate 0 to 25
            } else {
                index = 26; // Default index for non-alphabetic characters
            }

            // Calculate the starting point in the ROW for this specific letter
            int start = index * L;

            // Print the slice of the ROW that belongs to this letter
            for (int k = 0; k < L; k++) {
                printf("%c", ROW[start + k]);
            }
        }
        // Move to the next line after finishing the row for all characters in T
        printf("\n");
    }

    return 0;
}
