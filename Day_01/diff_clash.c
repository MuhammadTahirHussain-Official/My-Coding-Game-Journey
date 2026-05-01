#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int countWords(const char *s)
{
    int count = 0, inWord = 0;
    for (int i = 0; s[i]; i++)
    {
        if (!isspace(s[i]) && !inWord)
        {
            count++;
            inWord = 1;
        }
        else if (isspace(s[i]))
        {
            inWord = 0;
        }
    }
    return count;
}

int titleValid(const char *t)
{
    int wordLen = 0, wordCount = 0;

    for (int i = 0; ; i++)
    {
        if (t[i] == ' ' || t[i] == '\0')
        {
            if (wordLen > 0)
            {
                if (wordLen <= 3) return 0; // invalid word
                wordCount++;
                wordLen = 0;
            }
            if (t[i] == '\0') break;
        }
        else
        {
            wordLen++;
        }
    }

    return (wordCount >= 2);
}

int containsUpvote(const char *s)
{
    char temp[205];
    int i;

    for (i = 0; s[i]; i++)
        temp[i] = tolower(s[i]);
    temp[i] = '\0';

    return strstr(temp, "upvote") != NULL;
}

int main()
{
    char T[205], S[405], A[205];

    fgets(T, sizeof(T), stdin);
    fgets(S, sizeof(S), stdin);
    fgets(A, sizeof(A), stdin);

    T[strcspn(T, "\n")] = 0;
    S[strcspn(S, "\n")] = 0;
    A[strcspn(A, "\n")] = 0;

    if (containsUpvote(T) || containsUpvote(S) || containsUpvote(A))
    {
        printf("-1");
        return 0;
    }

    int votes = 0;

    if (titleValid(T))
        votes++;

    if (countWords(S) >= 10 && isupper(S[0]))
        votes++;

    if (strstr(A, "BOT") == NULL)
        votes++;

    printf("%d", votes);

    return 0;
}
