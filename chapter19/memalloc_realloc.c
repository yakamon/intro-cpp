#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* heap;
    printf("size = %lu\n", sizeof(*heap) / sizeof(heap[0]));

    heap = (int*)malloc(sizeof(int) * 10);
    printf("size = %lu\n", sizeof(*heap) / sizeof(heap[0]));

    heap = (int*)realloc(heap, sizeof(int) * 100);
    printf("size = %lu\n", sizeof(*heap) / sizeof(heap[0]));

    free(heap);

    return 0;
}
