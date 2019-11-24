#include <stdio.h>
int main()
{
    int hour, minute, fhour, fminute, finalhour, finalminute;
    scanf("%d %d %d %d", &hour, &minute, &fhour, &fminute);

    finalhour = fhour-hour;
    finalminute = fminute-minute;
    if(finalhour<0)
    {
        finalhour = 24 + (fhour - hour);
    }
    if (finalminute<0)
    {
        finalminute = 60 + (fminute-minute);
        finalhour--;
    }
    if(hour == fhour && minute == fminute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",finalhour,  finalminute);
    return 0;
}
