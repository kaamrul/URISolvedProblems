#include <stdio.h>
int main()
{
    int strt, endt, duration;
    scanf("%d %d", &strt, &endt);

    duration = endt-strt;
    if(duration<0)
    {
        duration = 24 + (endt - strt);
    }
    if(strt == endt)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}
