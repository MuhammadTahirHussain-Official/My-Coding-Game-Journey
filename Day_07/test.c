#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    printf("the result of the test is: %d", min(2, 999999));
    return 0;
}
