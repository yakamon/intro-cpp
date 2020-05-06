#include "module_sum.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t size = 50;
    int* arr;
    arr = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        arr[i] = i + (i * 5);
    }

    print_int_arr(arr, size);
    sum_int_arr(arr, size);
    print_int_arr(arr, size);

    return 0;
}
