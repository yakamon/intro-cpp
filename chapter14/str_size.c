#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "MacBook Air";
    int s1_size = 0;
    for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
        ;
    printf("str: %s, length: %d\n", s1, s1_size);

    char s2[] = "iMac Pro";
    int s2_size = strlen(s2);
    printf("str: %s, length: %d\n", s2, s2_size);

    return 0;
}
