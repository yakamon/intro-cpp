#include <memory.h>
#include <stdio.h>

void print_array(int*, size_t);

int main(void)
{
    int arr1[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096 };
    size_t arr1_size = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    size_t arr2_size = sizeof(arr2) / sizeof(arr2[0]);

    print_array(arr1, arr1_size);
    print_array(arr2, arr2_size);
    memcpy(arr2, arr1, sizeof(arr1));
    print_array(arr1, arr1_size);
    print_array(arr2, arr2_size);

    return 0;
}

void print_array(int* array, size_t size)
{
    printf("[");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf(" ]\n");
}
