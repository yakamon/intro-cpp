#include <stdio.h>
#define EXCISE_TAX_RATE 0.08
#define PRODUCT_NAME "りんご"

void add_tax(int* price);

int main(void)
{
    int price = 100;
    int n = 27;
    price *= n;
    add_tax(&price);

    printf("%s%d個の価格は税込み%d円です。\n", PRODUCT_NAME, n, price);

    return 0;
}

void add_tax(int* price)
{
    *price *= (1 + EXCISE_TAX_RATE);
}
