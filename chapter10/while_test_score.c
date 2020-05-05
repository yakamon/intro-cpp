#include <stdio.h>

int main(void)
{
    int score;
    do {
        printf("点数を入力してください。: ");
        scanf("%d", &score);
    } while (score < 0 || 100 < score);
    printf("入力されました。: %d\n", score);
    return 0;
}
