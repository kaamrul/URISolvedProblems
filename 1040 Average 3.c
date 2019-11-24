#include<stdio.h>
#include<math.h>
int main()
{
    float n1, n2, n3, n4, m, x;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    m = (n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1lf\n",m);
    if(m>=7.0)
        printf("Aluno aprovado.\n");
    else if(m>=5.0 && m<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &x);
        printf("Nota do exame: %.1f\n", x);
        if((x+m)/2>5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (x+m)/2);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}
