#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="vertebrado", x1[]="ave", x2[]="mamifero";
    char y[]="invertebrado", y1[]="inseto", y2[]="anelideo";
    char z1[]="carnivoro", z2[]="onivoro", z3[]="herbivoro", z4[]="hematofago";
    char m[]="aguia";

    char a[15], b[15], c[15];
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    if(0==strcmp(a,x) && 0==strcmp(b,x1))
    {
        if(0==strcmp(c,z1))
            printf("aguia\n");
        else if(0==strcmp(c,z2))
            printf("pomba\n");
    }
    else if(0==strcmp(a,x) && 0==strcmp(b, x2))
    {
        if(0==strcmp(c,z2))
            printf("homem\n");
        else if(0==strcmp(c,z3))
            printf("vaca\n");
    }
    else if(0==strcmp(a,y) && 0==strcmp(b, y1))
    {
        if(0==strcmp(c,z4))
            printf("pulga\n");
        else if(0==strcmp(c, z3))
            printf("lagarta\n");
    }
    else if(0==strcmp(a,y) && 0==strcmp(b,y2))
    {
        if(0==strcmp(c,z4))
            printf("sanguessuga\n");
        else if(0==strcmp(c,z2))
            printf("minhoca\n");
    }
    return 0;
}
/** vertebrado...ave...carnivoro
    vertebrado...ave...onivoro
    vertebrado...mamifero...onivoro
    vertebrado...mamifero...herbivoro

    invertebrado...inseto...hematofago
    invertebrado...inseto...herbivoro
    invertebrado...anelideo...hematofago
    invertebrado...anelideo...onivoro

***/
