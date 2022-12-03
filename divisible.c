#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        if (a % b == 0)
        {
            printf("%d is divisible by %d", a, b);
        }
        else
        {
            printf("Not possible");
        }
    }
    else
    {
        printf("You cannot divide with 0");
    }
}