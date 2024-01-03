#include <stdio.h>
int main()
{
    int x, y, z, Avg;
    printf("enter three numbers:");
    scanf("%d%d%d", &x, &y, &z);
    int sum = x + y + z;
    printf("sum= %d\n", sum);
    Avg = sum / 2;
    printf("average= %d\n", Avg);
    return 0;
}