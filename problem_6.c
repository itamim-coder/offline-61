#include <stdio.h>

int main()
{
    int mango_per_price, no_of_mango, apple_per_price, no_of_apple;

    scanf("%d %d %d %d", &mango_per_price, &no_of_mango, &apple_per_price, &no_of_apple);

    int mango_total_price = no_of_mango * mango_per_price;

    int apple_total_price = no_of_apple * apple_per_price;

    double total_price = mango_total_price + apple_total_price;

    int total_quantity = no_of_mango + no_of_apple;

    double average = total_price / total_quantity;

    printf("%lf", average);
}