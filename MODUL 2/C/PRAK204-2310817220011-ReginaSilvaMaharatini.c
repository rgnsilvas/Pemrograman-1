#include <stdio.h>
#include <math.h>

#define phi 3.142857

int main()
{
    double jari, tinggi;

    printf("Input\n");
    scanf("%lf %lf", &jari, &tinggi);

    double volume = phi * pow(jari, 2) * tinggi;
    double luas = 2 * phi * jari * (jari + tinggi);
    double keliling = 2 * phi * jari;

    printf("\nOutput\n");
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}