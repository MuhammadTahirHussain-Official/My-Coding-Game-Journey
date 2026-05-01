#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001] = "";
    scanf("%[^\n]", s);
    printf("%ld\n", 4 * ((strlen(s)+2)/3));
}
