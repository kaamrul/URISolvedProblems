#include<stdio.h>
int main()
{
    double n;
    int i, counter=0;

    for(i=0; i<6; i++)
    {
        scanf("%lf", &n);
        if(n>0)
            counter+=1;
    }
    printf("%d valores positivos\n",counter);
    return 0;
}
