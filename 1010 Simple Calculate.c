#include<stdio.h>
int main()
{
     int c1, c2, u1, u2;

     float p1, p2, total_price1, total_price2, result;

     scanf("%d %d %f", &c1, &u1, &p1);

     scanf("%d %d %f", &c2, &u2, &p2);

     total_price1 = p1 * u1;

     total_price2 = p2 * u2;

     result = total_price1 + total_price2;

     printf("VALOR A PAGAR: R$ %.2f\n", result);

     return 0;
}
