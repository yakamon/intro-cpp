#include <stdio.h>

int main(void)
{
    char mario[6] = { 'M', 'A', 'R', 'I', 'O', '\0' };
    printf("%s\n", mario);

    /**
     * わざわざ手動で '\0' を代入しなくても、初期値で代入されなかった場合は 0 で初期化されるので問題なし。
     * 最後に '\0' を書いた場合は、文字数指定を省略できる。
     */
    char luigi[6] = { 'L', 'U', 'I', 'G', 'I' };
    printf("%s\n", luigi);

    /**
     * 文字列リテラル
     * この表現は、初期化の時しか使えない（めっちゃ不便、、、）
     */
    char bowser[] = "BOWSER";
    printf("%s\n", bowser);

    /**
     * 初期化後に文字列を代入するには、一文字ずつ代入する他ない
     */
    char peach[6];
    peach[0] = 'P';
    peach[1] = 'E';
    peach[2] = 'A';
    peach[3] = 'C';
    peach[4] = 'H';
    peach[5] = '\0';
    printf("%s\n", peach);

    return 0;
}
