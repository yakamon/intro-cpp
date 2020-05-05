#include <stdio.h>

void f(void);

int main(void)
{
    f();
}

void f(void)
{
    /**
     * これは本当はやってはいけない。
     * ローカル変数は 0 で初期化されないから。
     * 初期化しないのは、関数呼び出しごとに生成されるローカル変数を逐一初期化するのは無駄だから。
     */
    int n;
    n++;
    printf("%d\n", n);
}
