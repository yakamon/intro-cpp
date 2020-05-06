#include <stdio.h>

typedef struct {
    char name[256];
    int height;
    int width;
    int depth;
    int npage;
} bookinfo;

int main(void)
{
    /**
     * 構造体はこんなふうに初期化する事もできる。
     * 多分、構造体も配列みたいに連続するメモリを持っていて、その型それぞれのサイズのメモリに値を保存しているだけだから、かな。
     */
    bookinfo bi = { "苦しんで覚えるC言語", 25, 15, 3, 355 };
    printf("name   = %s\n", bi.name);
    printf("height = %d\n", bi.height);
    printf("width  = %d\n", bi.width);
    printf("depth  = %d\n", bi.depth);
    printf("npage  = %d\n", bi.npage);
}
