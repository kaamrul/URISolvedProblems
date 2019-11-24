#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &j);
        if(j==0)
            printf("NULL\n");
        else if(j<=0 && j%2==0)
            printf("EVEN NEGATIVE\n");
        else if(j<=0 && j%2==-1)
            printf("ODD NEGATIVE\n");
        else if(j>=0 && j%2==0)
            printf("EVEN POSITIVE\n");
        else if(j>=0 && j%2==1)
            printf("ODD POSITIVE\n");
    }
    return 0;
}
