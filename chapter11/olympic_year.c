#include <stdio.h>
#include <time.h>

void is_olympic_held(int);
int olympic(int);

int main(void)
{
    int year;
    printf("年を入力してください。: ");
    scanf("%d", &year);

    is_olympic_held(year);

    switch (olympic(year)) {
    case 0:
        printf("開催されない: %d\n", year);
        break;
    case 1:
        printf("夏季オリンピック: %d\n", year);
        break;
    case 2:
        printf("冬季オリンピック: %d\n", year);
        break;
    }
    return 0;
}

void is_olympic_held(int year)
{
    if (year % 4 == 0) {
        printf("Summer olympic will be held in %d\n", year);
        return;
    }

    if (year % 2 == 0) {
        printf("Winter olympic will be held in %d\n", year);
        return;
    }

    printf("Olympic will not be held in %d\n", year);
    return;
}

int olympic(int year)
{
    if (year % 4 == 0) {
        return 1;
    }
    if (year % 2 == 0) {
        return 2;
    }
    return 0;
}
