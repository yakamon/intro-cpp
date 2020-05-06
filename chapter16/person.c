#include <stdio.h>

typedef struct {
    char name[64];
    int age;
    int sex;
} person;

void scan_multi_person(size_t n, person persons[]);
void print_multi_person(size_t n, person persons[]);

int main(void)
{
    person persons[3];
    scan_multi_person(3, persons);
    print_multi_person(3, persons);

    return 0;
}

void scan_multi_person(size_t n, person persons[])
{
    for (int i = 0; i < n; i++) {
        printf("%d 人目の名前を入力してください: ", i + 1);
        scanf("%64s", persons[i].name);
        printf("%d 人目の年齢を入力してください: ", i + 1);
        scanf("%d", &persons[i].age);
        printf("%d 人目の性別を入力してください: ", i + 1);
        scanf("%d", &persons[i].sex);
        printf("\n");
    }

    return;
}

void print_multi_person(size_t n, person persons[])
{
    for (int i = 0; i < n; i++) {
        printf("%d 人目:\n", i + 1);
        printf("  名前: %s\n", persons[i].name);
        printf("  年齢: %d\n", persons[i].age);
        printf("  性別: %d\n", persons[i].sex);
    }

    return;
}
