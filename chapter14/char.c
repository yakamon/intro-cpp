#include <ctype.h>
#include <stdio.h>

int main(void)
{
    // scan and print
    char c;
    scanf("%c", &c);
    printf("char: %c\n", c);

    // printf ascii chars
    for (int i = 0; i < 256; i++) {
        // printf("%03d: %c\n", i, i);
        printf("char\tisalnum\tisdigit\tisxdigit\tisalpha\tisupper\tislower\tispunct\tisspace\n");
        printf("%c\t%d\t%d\t%d\t\t%d\t%d\t%d\t%d\t%d\n",
            i, isalnum(i), isdigit(i), isxdigit(i), isalpha(i), isupper(i), islower(i), ispunct(i), isspace(i));
    }

    // char to integer
    char ci = '9';
    int i = ci - '0';
    printf("number: %d\n", i);

    return 0;
}
