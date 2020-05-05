#include <stdio.h>

int main(void)
{
    /**
     * 配列の宣言。
     * サイズが必要。
     * 指定できるのは整数値（整数リテラル）のみで、整数型の変数を指定することはできない。
     */
    int arr[100];

    /**
     * 配列要素の代入。
     */
    arr[0] = 10;
    printf("arr[0] = %d\n", arr[0]);
    arr[0]++;
    printf("arr[0] = %d\n", arr[0]);

    /**
     * 初期値の代入。
     * 初期値の代入ではサイズを省略できる。
     */
    int arr2[10] = { 1, 2, 3 }; // int arr2[] = { 1, 2, 3 };
    for (int i = 0; i < 10 - 1; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    int arr3[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 };
    printf("sizeof(arr3) = %lu, sizeof(arr3[0]) = %lu\n", sizeof(arr3), sizeof(arr3[0]));
    int arr3_size = sizeof(arr3) / sizeof(arr3[0]);
    for (int i = 0; i < arr3_size; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    return 0;
}
