#include <stdio.h>

int main(void)
{
    int buf = 100;
    FILE* file;
    file = fopen("chapter17/file.dat", "wb");
    fwrite(&buf, sizeof(buf), 1, file);
    fclose(file);

    int buf2[] = { 10, 100, 1000, 10000 };
    FILE* file2;
    file2 = fopen("chapter17/file2.dat", "wb");
    fwrite(buf2, sizeof(buf2), 1, file2);
    fclose(file2);

    return 0;
}
