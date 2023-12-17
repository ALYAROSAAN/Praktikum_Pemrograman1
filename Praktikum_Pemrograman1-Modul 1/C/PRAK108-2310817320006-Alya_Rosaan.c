#include <stdio.h>

int main(){
    float a = 5, b = 14;

    printf("pak dengklek mengelilingi taman 5\n", a);
    printf("jarak tempuh pak dengklek 14\n", b);

    double keliling = b/a;
    double jari_jari = keliling/(2*3.14);

    printf("jari-jari taman yang dikelilingi pak dengklek adalah %.2f", jari_jari);
}