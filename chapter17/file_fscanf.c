#include <stdio.h>

int main(void)
{
    char s[64];
    int i;

    FILE* file;
    file = fopen("chapter17/file.txt", "r");
    fscanf(file, "%64s", s);
    fscanf(file, "%d", &i);
    fclose(file);

    printf("s = %s\n", s);
    printf("i = %d\n", i);

    return 0;
}
