#include <stdio.h>

int main(void)
{
    FILE* file;
    file = fopen("chapter17/file.txt", "w+");
    fprintf(file, "Hello,world!\n");
    fprintf(file, "%d\n", 1);
    fclose(file);

    return 0;
}
