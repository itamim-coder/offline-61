Rocky Chowdhury
#include <stdio.h>
int main()
{
    int n;
    n=10;
    printf("Enter the number of rows you want to print\n");
    // scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
