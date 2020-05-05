#include <stdio.h>

int main(void)
{
    int list_price;
    printf("Input list price: ");
    scanf("%d", &list_price);

    int dc1, dc3, dc5, dc8;
    dc1 = (int)(list_price * (1.0 - 0.1));
    dc3 = (int)(list_price * (1.0 - 0.3));
    dc5 = (int)(list_price * (1.0 - 0.5));
    dc8 = (int)(list_price * (1.0 - 0.8));

    printf("1割引: %d\n3割引: %d\n5割引: %d\n8割引: %d\n", dc1, dc3, dc5, dc8);
}
