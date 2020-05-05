#include <stdio.h>

void f(int* pvalue);

int main(void)
{
    int value = 10;
    printf("&value = %p\n", &value);
    f(&value);
    printf("value = %d\n", value);

    return 0;
}

void f(int* pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue *= 100;

    return;
}
