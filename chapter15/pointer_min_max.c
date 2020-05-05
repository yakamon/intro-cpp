#include <stdio.h>

void min_max(int arr[], int* ans_min, int* ans_max);

int main(void)
{
    int arr[10];
    int min, max;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == -1) {
            break;
        }
    }

    min_max(arr, &min, &max);
    printf("min = %d, max = %d\n", min, max);

    return 0;
}

void min_max(int arr[], int* ans_min, int* ans_max)
{
    *ans_min = *ans_max = arr[0];
    for (size_t i = 1; arr[i] != -1; i++) {
        if (arr[i] < *ans_min) {
            *ans_min = arr[i];
        }
        if (*ans_max < arr[i]) {
            *ans_max = arr[i];
        }
    }
}
