#include <stdio.h>
#include <math.h>

int main(){

    int a,b;
    int c,d;

    printf("input\n");
    printf("");
    scanf("%d %d", &a, &b);

    int alas = sqrt(pow(b, 2)-pow(a, 2));
    int tinggi = a;
    int keliling = a + b + alas;
    int luas = alas*tinggi/2;

    printf("output\n");
    printf("alas = %d cm\n", alas);
    printf("tinggi = %d cm\n", tinggi);
    printf("keliling = %d cm\n", keliling);
    printf("luas = %d cm^2\n\n", luas);

    printf("input\n");
    printf("");
    scanf("%d", &c);
    printf("");
    scanf("%d", &d);

    int alas1 = sqrt(pow(d, 2)-pow(c, 2));
    int tinggi1 = c;
    int keliling1 = c + d + alas1;
    int luas1 = alas1*tinggi1/2;

    printf("output\n");
    printf("alas = %d cm\n", alas1);
    printf("tinggi = %d cm\n", tinggi1);
    printf("keliling = %d cm\n", keliling1);
    printf("luas = %d cm\n\n", luas1);

}

