#include <stdio.h>
#include <string.h>

int main(void)
{
    /**
     * この比較は文字列の内容の比較ではなく、ポインタの一致不一致の比較である。
     * つまりそれは常に false になる。
     */
    char s1[] = "hello", s2[] = "hello";
    printf("%d\n", s1 == s2);

    /**
     * 文字列の内容を比較するためには、ループによって全要素の一致を確認する必要がある。
     */
    int len = strlen(s2), i;
    for (i = 0; i < len + 1; i++) { // 文字列の比較では EOS まで一致する必要があるから len+1 にする。
        if (s1[i] != s2[i]) {
            i = -1;
            break;
        }
    }
    if (i < 0) {
        printf("不一致\n");
    } else {
        printf("一致\n");
    }

    /**
     * 文字列比較関数
     */
    char s3[] = "Kazumasa", s4[] = "Hirata";
    if (strcmp(s3, s4) == 0) {
        printf("%s and %s is the same\n", s3, s4);
    } else {
        printf("%s and %s is not the same\n", s3, s4);
    }
    if (strcmp(s1, s2) == 0) {
        printf("%s and %s is the same\n", s1, s2);
    } else {
        printf("%s and %s is not the same\n", s1, s2);
    }

    return 0;
}
