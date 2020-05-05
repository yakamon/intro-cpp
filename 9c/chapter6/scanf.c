#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("integer: %d\n", n);

    double r;
    scanf("%lf", &r);
    printf("real number: %f\n", r);

    int m1, m2;
    scanf("%d%d", &m1, &m2);
    printf("%d * %d = %d\n", m1, m2, m1 * m2);

    int i;
    double f;
    scanf("%d%lf", &i, &f);
    printf("int: %d, double: %f\n", i, f);

    return 0;
}
