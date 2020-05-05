#include <stdio.h>

int main(void)
{
    while (0) {
        // 実行されない
        printf("while\n");
    }

    do {
        // 一度だけ実行される
        printf("do-while\n");
    } while (0);
}
