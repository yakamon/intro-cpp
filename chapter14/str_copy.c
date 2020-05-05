#include <stdio.h>
#include <string.h>

void strncpy_eos(char a[], char b[], int n)
{
    strncpy(a, b, n);
    a[n] = '\n';
}

int main(void)
{
    /**
     * strcpy
     * 文字列コピー関数で、一文字ずつ代入するよりも簡単。
     */
    char s[10];
    strcpy(s, "ZELDA");
    printf("%s\n", s);

    /**
     * strncpy
     * 指定された文字数だけ先頭からコピー。
     */
    char link[] = "LINK", ganondorf[10];
    strncpy(ganondorf, link, 3);
    ganondorf[3] = '\0';
    printf("link = %s, ganondorf = %s\n", link, ganondorf);

    return 0;
}