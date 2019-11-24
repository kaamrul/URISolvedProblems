#include<stdio.h>
int main()
{
    float n, tax;
    scanf("%f", &n);
    if(n>=0.0 && n<=2000.00)
        printf("Isento\n");
    else if(n>=2000.01 && n<=3000.00)
    {
        tax = (n-2000.00)*0.08;
        printf("R$ %.2f\n", tax);
    }
    else if(n>=3000.01 && n<=4500.00)
    {
        tax = (n-3000.00)*0.18+80;
        printf("R$ %.2f\n", tax);
    }
    else if(n>4500.00)
    {
        tax = (n-4500.00)*0.28+350;
        printf("R$ %.2f\n", tax);
    }

    return 0;

}
