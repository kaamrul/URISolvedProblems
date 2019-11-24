#include<stdio.h>
#include<math.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    float c1=4.00, c2=4.50, c3=5.00, c4=2.00, c5=1.5, total=0;

    if(x == 1)
    {
        total = c1*y;
    }
    else if(x == 2)
    {
        total = c2*y;
    }
    else if(x == 3)
    {
        total = c3*y;
    }
    else if(x == 4)
    {
        total = c4*y;
    }
    else if(x == 5)
    {
        total = c5*y;
    }
    printf("Total: R$ %.2f\n", total);
    return 0;
}
