#include <stdio.h>

typedef struct {
    int height;
    int width;
} square;

void print_squares(square squares[], size_t size);

int main(void)
{
    square squares[10];
    for (int i = 0; i < 10; i++) {
        squares[i].height = 5 * i + 1;
        squares[i].width = 7 * i + 2;
    }
    print_squares(squares, 10);

    return 0;
}

void print_squares(square squares[], size_t size)
{
    for (int i = 0; i < size; i++) {
        printf("height = %d\n", squares[i].height);
        printf("width  = %d\n", squares[i].width);
        printf("square = %d\n", squares[i].height * squares[i].width);
    }

    return;
}
