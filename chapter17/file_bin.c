#include <stdio.h>

int main(void)
{
    FILE* file;
    file = fopen("chapter17/file.dat", "wb");
    fclose(file);

    return 0;
}
