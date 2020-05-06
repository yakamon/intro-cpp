#include <stdio.h>

// 水筒
typedef struct
{
    int height; // 高さ[cm]
    int diameter; // 直径[cm]
    int capacity; // 容量[ml]
} bottle;

void print_bottle(bottle);

int main(void)
{
    bottle b;
    b.height = 21;
    b.diameter = 7;
    b.capacity = 500;

    print_bottle(b);
}

void print_bottle(bottle b)
{
    printf("height   = %d\n", b.height);
    printf("diameter = %d\n", b.diameter);
    printf("capacity = %d\n", b.capacity);

    return;
}
