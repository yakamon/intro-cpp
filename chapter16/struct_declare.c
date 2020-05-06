#include <stdio.h>
#include <string.h>

/**
 * 構造体の宣言
 * student_tag は構造体タグ（構造体の型名）
 */
struct student_tag {
    int year;
    int group;
    int number;
    char name[256];
    double stature;
    double weight;
};

/**
 * 新しい型の宣言
 * typedef <新しい型の形> <宣言する型名>
 */
typedef struct student_tag student;

int main(void)
{
    struct student_tag s1, s2;

    // 構造体変数への代入
    s1.year = 1990;
    s1.group = 1;
    s1.number = 16;
    strcpy(s1.name, "Gachapin");
    s1.stature = 172.0;
    s1.weight = 67.5;

    // 構造体変数同士の代入
    s2 = s1;
    printf("s1.year    : s2.year    = %d : %d\n", s1.year, s2.year);
    printf("s1.group   : s2.group   = %d : %d\n", s1.group, s2.group);
    printf("s1.number  : s2.number  = %d : %d\n", s1.number, s2.number);
    printf("s1.name    : s2.name    = %s : %s\n", s1.name, s2.name);
    printf("s1.stature : s2.stature = %f : %f\n", s1.stature, s2.stature);
    printf("s1.weight  : s2.weight  = %f : %f\n", s1.weight, s2.weight);

    /**
     * 新しく宣言された型を使う
     */
    student s3;
    printf("s3.year = %d\n", s3.year);
    printf("s3.group = %d\n", s3.group);
    printf("s3.number = %d\n", s3.number);
    printf("s3.name = %s\n", s3.name);
    printf("s3.stature = %f\n", s3.stature);
    printf("s3.weight = %f\n", s3.weight);

    return 0;
}
