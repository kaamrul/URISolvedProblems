#include <stdio.h>
int main()
{
    double n,b=0,c;
    int x,counter=0;
    for(x=1;x<=6;x++)
    {
        scanf("%lf", &n);
        if(n>=0)
        {
            counter++;
            b+=n;
        }
    }
    c=b/counter;
    printf ("%d valores positivos\n",counter);
    printf("%.1lf\n", c);
    return 0;
}
