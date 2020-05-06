#include <stdio.h>

int main(void)
{
    FILE* file;
    file = fopen("chapter17/file.txt", "w"); // 自分が書き込みできる、かつ他者が書き込みできないように、ロックした上でファイルを開く。
    fclose(file); // ロックを外して、ディスクに書き込み内容を反映する（高速化）。

    return 0;
}
