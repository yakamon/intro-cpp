#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("%d年には夏季オリンピックが開催されます。\n", year);
        return 0;
    }

    if (year % 2 == 0) {
        printf("%d年には冬季オリンピックが開催されます。\n", year);
        return 0;
    }

    printf("%d年にはオリンピックは開催されません。\n", year);
    return 0;
}
