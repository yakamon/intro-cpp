#include <stdio.h>

int main(void)
{
    int n = 10;
    if (n) {
        printf("C言語のifは指定された条件式の結果が0か否かだけを検証する。\n");
        printf("0以外は真、0は偽と判定する。\n");
    }

    return 0;
}