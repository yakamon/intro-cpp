#include <stdio.h>

void sigma(int min, int max, int* sum);

int main(void)
{
    int min = 10, max = 15, sum;
    sigma(min, max, &sum);
    printf("sigma = %d\n", sum);

    return 0;
}

void sigma(int min, int max, int* sum)
{
    *sum = (min + max) * (max - min + 1) / 2;
}
