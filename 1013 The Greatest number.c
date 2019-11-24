#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, p, q;
    scanf("%d %d %d", &a, &b, &c);
    p = ((a + b + abs (a - b))/2);
    q = ((p + c + abs (p - c))/2);
    printf("%d eh o maior\n", q);
    return 0;
}
