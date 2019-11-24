#include<stdio.h>
int main()
{
    int x;
    float y, average;
    scanf("%d %f", &x, &y);
    average = (x / y);
    printf("%.3f km/l\n", average);
    return 0;
}
