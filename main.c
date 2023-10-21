#include <stdio.h>
#include <math.h>
int main() {
    double a = 0;
    printf("Enter double: ");
    scanf("%lf", &a);

    double z_1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    double z_2 = 2 * sqrt(a) * cos (a) * sin(M_PI + 2 * a);

    printf("Result: \n");
    printf("z_1: ");
    printf("%lf\n", z_1);
    printf("z_2: ");
    printf("%lf1", z_2);

    return 0;
}