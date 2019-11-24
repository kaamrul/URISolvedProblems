#include<stdio.h>
int main()
{
    float x, y, z, average=0;
    int i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%f %f %f", &x, &y, &z);
        average=((x*2)+(y*3)+(z*5))/10;
        printf("%.1f\n", average);
    }
    return 0;
}
