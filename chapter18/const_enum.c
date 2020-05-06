#include <stdio.h>
#include <string.h>

enum {
    MALE, // 男性
    FEMALE, // 女性
    UNKNOWN, // 不明
};

typedef struct {
    char name[64];
    int age;
    int sex;
} person;

void print_person(person p);

int main(void)
{
    person p[3] = {
        { "Zelda", 19, FEMALE },
        { "Link", 18, MALE },
        { "Ganondorf", 53, UNKNOWN }
    };

    for (size_t i = 0; i < 3; i++) {
        print_person(p[i]);
    }

    return 0;
}

void print_person(person p)
{
    char sex_str[32];
    if (p.sex == 0) {
        strcpy(sex_str, "男性");
    } else if (p.sex == 1) {
        strcpy(sex_str, "女性");
    } else {
        strcpy(sex_str, "性別不明");
    }

    printf("%sは%d歳で%sです。\n", p.name, p.age, sex_str);
}
