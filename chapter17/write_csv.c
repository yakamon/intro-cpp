#include <stdio.h>

typedef struct {
    int id;
    char name[64];
    int score_avg;
} test_score;

int main(void)
{
    // prepare data
    test_score data[4] = {
        { 1, "野比のび太", 0 },
        { 2, "源静香", 90 },
        { 3, "剛田武", 40 },
        { 4, "骨川スネ夫", 70 }
    };

    FILE* f = fopen("chapter17/test_scores.csv", "w");

    // print header
    fprintf(f, "番号,名前,テストの平均点\n");

    // print rows
    for (size_t i = 0; i < 4; i++) {
        fprintf(f, "%d,%s,%d\n", data[i].id, data[i].name, data[i].score_avg);
    }

    // close file
    fclose(f);

    return 0;
}
