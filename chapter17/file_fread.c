#include <stdio.h>

int main(void)
{
    int buf;
    FILE* file;

    file = fopen("chapter17/file2.dat", "rb");
    fread(&buf, sizeof(buf), 1, file);
    fclose(file);

    printf("buf = %d\n", buf);

    return 0;
}