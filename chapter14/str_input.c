#include <stdio.h>

int main(void)
{
    /**
     * & はつけない。
     * 配列長を超える長さの文字列を入力すると暴走する。
     */
    char str1[32];
    scanf("%s", str1);
    printf("%s\n", str1);

    /**
     * 指定長以内の長さの文字列を入力する。
     * またスペースは区切り文字として認識されるため入力不可能。（これを解決するのは困難らしい）
     */
    char str2[32];
    scanf("%32s", str2);
    printf("%s\n", str2);

    return 0;
}
