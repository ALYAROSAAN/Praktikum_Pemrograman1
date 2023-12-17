#include <stdio.h>
#include <math.h>

int main(){
    double phi = 3.14286;
    double jari_jari, tinggi_bejana;
    double jari_jari_2, tinggi_bejana_2;

    printf("input\n");
    printf("");
    scanf("%lf", &jari_jari);
    printf("");
    scanf("%lf", &tinggi_bejana);

    double volume = (phi * pow(jari_jari, 2) * tinggi_bejana);
    double luas = (2 * phi * jari_jari * (jari_jari+tinggi_bejana));
    double keliling = (2 * phi * jari_jari);

    printf("output\n");
    printf("volume = %.2lf\n", volume);
    printf("luas = %.2lf\n", luas);
    printf("keliling = %.2lf\n\n", keliling);

    printf("input\n");
    printf("");
    scanf("%lf %lf", &jari_jari_2, &tinggi_bejana_2);

    double volume1 = phi * pow(jari_jari_2, 2) * tinggi_bejana_2;
    double luas1 = 2 * phi * jari_jari_2 * (jari_jari_2+tinggi_bejana_2);
    double keliling1 = 2 * phi * jari_jari_2;

    printf("output\n");
    printf("volume = %.2lf\n", volume1);
    printf("luas = %.2lf\n", luas1);
    printf("keliling = %.2lf", keliling1);
}
