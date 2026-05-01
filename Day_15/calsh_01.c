#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y); 
    printf("%.2lf%%\n", fabs((double)(x - y) / y) * 100);
    return 0;
}
