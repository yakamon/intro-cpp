#include <stdio.h>

void print_int_arr(int* arr, size_t size)
{
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf(" ]\n");
}

int sum_int_arr(int* arr, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
