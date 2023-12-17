#include <stdio.h>

int main(){
    
    int alas = 5;
    int tinggi = 12;
    int miring = 13;

    printf("diketahui:\n");
    printf("alas = 5 cm\n");
    printf("tinggi = 12 cm\n");

    printf("sisi A = %d cm\n", alas);

    printf("sisi B = %d cm\n", tinggi);

    printf("sisi C = %d cm\n\n", miring);

    int keliling = alas + tinggi + miring;
    int luas = (alas * tinggi) / 2;

    printf("keliling = %d cm\n", keliling );
    printf("luas = %d cm", luas );

}