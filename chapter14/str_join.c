#include <stdio.h>

int main(void)
{
    /**
     * 文字列の連結1: リテラルを並べるだけ
     */
    char series[] = "Breath "
                    "of "
                    "the "
                    "Wild ";
    printf("%s\n", series);

    /**
     * 文字列の連結2: strcat
     * 連結される側の文字列は、追加される文字列分の空き容量を持っていなければならない。（でないと暴走）
     */
    char series2_1[10] = "Wind ";
    char series2_2[] = "Tact";
    strcat(series2_1, series2_2);
    printf("%s\n", series2_1);

    /**
     * 高性能な連結関数: sprintf
     */
    char series3[100];
    char series3_1[] = "A Link ";
    char series3_2[] = "to the Past";
    sprintf(series3, "%s%s\n", series3_1, series3_2);
    // series3 は文字列だから "%s" のようなフォーマットリテラルを先行させる必要は、ここではない。
    // ただし、文字列内に '%' が含まれる場合、その文字列はフォーマットリテラルと認識されて誤作動を招く。
    // したがって、原則文字列であってもフォーマットリテラルを常に使用するべきである。
    printf("%s\n", series3);

    return 0;
}