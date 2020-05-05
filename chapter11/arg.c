#include <stdio.h>

int sigma(int, int);

int main(void)
{
    int min, max;
    scanf("%d%d", &min, &max);

    printf("Sigma of range [%d, %d] = %d", min, max, sigma(min, max));

    return 0;
}

int sigma(int min, int max)
{
    return (max + min) * (max - min + 1) / 2;
}
