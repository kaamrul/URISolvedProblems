#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    scanf("%f", &n);
    int a = n*100;
    //Notes
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100,00\n", a/10000);
    a %= 10000;
    printf("%d nota(s) de R$ 50,00\n", a/5000);
    a %= 5000;

    printf("%d nota(s) de R$ 20,00\n", a/2000);
    a %= 2000;

    printf("%d nota(s) de R$ 10,00\n", a/1000);
    a %= 1000;

    printf("%d nota(s) de R$ 5,00\n", a/500);
    a %= 500;

    printf("%d nota(s) de R$ 2,00\n", a/200);

    //coins


    printf("MOEDAS:\n");
    a %= 200;

    printf("%d nota(s) de R$ 1,00\n", a/100);
    a %= 100;

    printf("%d nota(s) de R$ 00,50\n", a/50);
    a %= 50;

    printf("%d nota(s) de R$ 00,25\n", a/25);
    a %= 25;

    printf("%d nota(s) de R$ 00,10\n", a/10);
    a %= 10;

    printf("%d nota(s) de R$ 00,05\n", a/5);
    a %= 5;

    printf("%d nota(s) de R$ 00,01\n", a/1);

    return 0;
}

