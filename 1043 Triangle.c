#include<stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b)
        printf("Perimetro = %.1f\n", a+b+c);
    else
        printf("Area = %.1f\n", (a+b)/2*c);

    return 0;
}
