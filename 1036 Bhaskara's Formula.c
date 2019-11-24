#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    x = pow(b,2) - 4*a*c;
    r1=(-b+sqrt(x))/(2*a);
    r2=(-b-sqrt(x))/(2*a);

    if(a!=0 && x>=0){
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
