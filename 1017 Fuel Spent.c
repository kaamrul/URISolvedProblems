#include<stdio.h>
#include<math.h>
int main()
{
    int time, speed;
    float distance, liters;
    scanf("%d %d", &time, &speed);
    distance = time * speed;
    liters = distance / 12;
    printf("%.3f\n", liters);
    return 0;
}
