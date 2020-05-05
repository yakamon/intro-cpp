#include <stdio.h>

int main(void)
{
    int array[10];
    size_t size = sizeof(array) / sizeof(array[0]);
    for (int i = size - 1; i > -1; i--) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
