#include <stdio.h>

int main(void)
{
    int n = 1, month = 1;
    printf("%02d 月目: %7d\n", month, n);
    while (n < 1000000) {
        n *= 2;
        printf("%02d 月目: %7d\n", month, n);
    }
    return 0;
}
