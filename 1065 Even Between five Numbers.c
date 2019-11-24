/**
    Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

    Input
    The input will be 5 integer values.

    Output
    Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

    Input Sample:	    |      Output Sample:
    7                   |
    -5                  |      3 valores pares
    6                   |
    -4                  |
    12                  |


**/

#include <stdio.h>
int main()
{
    int i, n, counter=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            counter+=1;
        }
    }

    printf("%d valores pares\n", counter);
    return 0;
}

