#include<stdio.h>
int main()
{
    int i, n, k,max=0;
    for(i=1; i<=100; i++)
    {
        scanf("%d", &n);
        if(max<n)
        {
            max=n;
            k=i;
        }
    }
    printf("%d\n%d\n", max,k);
    return 0;
}
