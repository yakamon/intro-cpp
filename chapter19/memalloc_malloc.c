#include <err.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 100;

    int* heap;
    /**
     * メモリ確保
     * malloc() は void 型のポインタを返す → 目的の型でキャスト（C++ では必須らしい）。
     */
    heap = (int*)malloc(sizeof(int) * size);
    if (heap == NULL) {
        err(EXIT_FAILURE, "malloc() failed");
    }

    for (size_t i = 0; i < size; i++) {
        heap[i] = i * i;
    }
    for (size_t i = 0; i < size; i++) {
        printf("heap[%lu] = %d\n", i, heap[i]);
    }

    /**
     * メモリ解放
     * これをやらないとメモリリークになる。
     */
    free(heap);

    return 0;
}
