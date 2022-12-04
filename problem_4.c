#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    double total = (double)a * b;
    printf("%llf", total);
}