#include<stdio.h>
#include <math.h>
int main()
{
    int i, n, x;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            x=pow(i,2);
            printf("%d^2 = %d\n", i, x);
        }
    }
    return 0;
}
