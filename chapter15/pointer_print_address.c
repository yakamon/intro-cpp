#include <stdio.h>

int main(void)
{
    int i;
    printf("%p\n", &i);

    /**
     * まとめて初期化するとポインタの値は左ほど小さくなっているようなんだけど、これはなんでだろう。
     * 複数初期化するときはスタックに入れてる？
     */
    int i1, i2, i3;
    printf("i3: %p\n", &i3);
    printf("i2: %p\n", &i2);
    printf("i1: %p\n", &i1);

    char c1, c2, c3;
    printf("c3: %p\n", &c3);
    printf("c2: %p\n", &c2);
    printf("c1: %p\n", &c1);

    /**
     * この結果を見ると C 言語における配列というデータ構造において、
     * arr[0] や arr[1] は「配列名のアドレス + 要素番号のメモリを参照する」という意味だということが分かる。
     * つまり、配列名のアドレスが分かれば、各要素には添字でアクセスできることになる。
     * だから、文字の配列である文字列を scanf したり printf するときには '&' をつけないのだ。
     * また、配列名のアドレスと配列の 0 番目の要素のアドレスは等しいから array == &array[0] となる。
     */
    int arr[10];
    printf("array: %p\n", arr);
    printf("arr[0]: %p\n", &arr[0]);
    printf("arr[1]: %p\n", &arr[1]);
    printf("arr[2]: %p\n", &arr[2]);

    return 0;
}
