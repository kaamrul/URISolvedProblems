#include <stdio.h>

int main()
{
    int Number, Hours;

    float Amount, Salary;

    scanf("%d %d %f", &Number, &Hours, &Amount);

    Salary = Hours * Amount;

    printf("NUMBER = %d\n", Number);

    printf("SALARY = U$ %.2f\n", Salary);

    return 0;
}
