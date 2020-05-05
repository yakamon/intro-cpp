#include <stdio.h>

/**
 * グローバル変数は自動的に 0 で初期化される。
 * 原則、グローバル変数は1つのソースファイル内で共有される。
 * 複数のソースファイルを扱う（ファイル間の変数共有も含む）方法が後々解説される。
 */
int n; // == 0

int f(void);

int main(void)
{
    printf("n = %d\n", n);
    for (int i = 0; i < 100; i++) {
        f();
        printf("n = %d\n", n);
    }

    return 0;
}

int f(void)
{
    return n++;
}
