#include <stdio.h>
#include <string.h>

int main(void)
{
    char last_name[256], first_name[256];
    printf("姓を入力してください: ");
    scanf("%256s", last_name);
    printf("名を入力してください: ");
    scanf("%256s", first_name);

    strcat(last_name, first_name);
    printf("フルネームは %s です。\n", last_name);
}
