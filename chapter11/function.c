#include <stdio.h>

// プロトタイプ宣言
int f(void);

int main(void)
{
    f();
    return 0;
}

int f(void)
{
    printf("%d\n", 5 * 81039245);
    return 0;
}
