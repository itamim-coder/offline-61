#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    int year = a / 365;
    int remain_days = a - (year * 365);
    int month = remain_days / 30;

    printf("%d\n", year);
    printf("%d\n", month);
    printf("%d\n", remain_days % 30);
}