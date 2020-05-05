#include <stdio.h>

void f(void);

int main(void)
{
    for (int i = 0; i < 10; i++) {
        f();
    }
}

void f(void)
{
    /**
     * 静的ローカル変数は、最初の呼び出し時の一度だけ 0 で初期化される。
     * その値は、プログラムの終了まで保持される。
     */
    static int n;
    n++;

    printf("n = %d\n", n);

    return;
}
