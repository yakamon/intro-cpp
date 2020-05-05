#include <stdio.h>

int sum(int arr[], size_t size);
int avg(int arr[], size_t size);

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int average = avg(arr, sizeof(arr) / sizeof(arr[0]));
    printf("average = %d\n", average);

    return 0;
}

int sum(int arr[], size_t size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        /**
         * これが C 言語の配列要素の正体。
         * そのポインタ変数の指す型のサイズ分だけポインタ値を増やしている。
         * だから、「型のサイズ * i」を足す必要はない、足すのは i だけでいい。
         */
        sum += *(arr + i);
    }
    return sum;
}

// もっとポインタ演算
int sum2(int arr[], size_t size)
{
    int sum = 0;
    for (int* d = arr; d != &arr[size]; d++) {
        sum += *d;
    }
    return sum;
}

/**
 * 配列を引数に取るときの書き方は3通りある
 * - int arr[<num>]: 要素数の指定には何の意味もない。
 * - int arr[]     : 最も分かりやすい。
 * - int* arr      : 普通のポインタ型と紛らわしい。
 *
 * にしても、配列の平均を求めるために size を引数として渡さなきゃいけないのはすげぇ不便だな。
 * 何で渡す必要があるかというと、引数として受け取った arr の sizeof(arr) を取ると、それは int* のサイズであって、
 * arr[] のサイズ、つまりは配列の長さではなくなっているから。
 * これ、どうにかならないのか？
 */
int avg(int arr[], size_t size)
{
    return sum(arr, size) / size;
}
