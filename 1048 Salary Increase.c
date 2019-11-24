#include <stdio.h>
int main()
{
    float salary,newsalary, p;
    int x;
    char c = '%';
    scanf("%f", &salary);
    if(salary>=0.0 && salary<=400.00)
    {
        p = salary * .15;
        x = 15;
    }
    else if (salary>=400.01 && salary<=800.00)
    {
        p = salary * .12;
        x = 12;
    }
    else if (salary>=800.01 && salary<=1200.00)
    {
        p = salary * .10;
        x = 10;
    }
    else if (salary>=1200.01 && salary<=2000.00)
    {
        p = salary * .07;
        x = 7;
    }
    else if(salary>2000.00)
    {
        p = salary * .04;
        x = 4;
    }
    printf("Novo salario: %.2f\n", newsalary = salary+p);
    printf("Reajuste ganho: %.2f\n", p);
    printf("Em percentual: %d %c\n", x,c);
    return 0;
}
