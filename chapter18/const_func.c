#include <stdio.h>
#define PRINT_INT(X) printf("%d\n", (X))

int main(void)
{
    for (int i = 0; i < 10; i++) {
        PRINT_INT(i);
    }

    return 0;
}
