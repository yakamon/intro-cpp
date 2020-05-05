#include <stdio.h>

int main(void)
{
    int soft_drink = 198, milk = 138;
    double tax_rate = 1.05;

    int money = 1000;
    int price_sum = (int)((soft_drink + milk * 2) * tax_rate);

    printf("%d\n", money - price_sum);

    return 0;
}
