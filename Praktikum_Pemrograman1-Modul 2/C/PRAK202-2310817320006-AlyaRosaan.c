#include <stdio.h>

//testcase1
int main(){

    int a;
    float b;

    printf("masukkan nilai pertama:" );
    scanf("%d", &a);

    printf("masukkan nilai kedua:");
    scanf("%f", &b);

    float jumlah = a + b;

    printf("hasil dari penjumlahan nilai pertama \"%d\"", a);
    printf(" dan nilai kedua \"%.1f\"", b);
    printf(" adalah %.2f\n", jumlah);

//testcase2
    
    float c;
    float d; 

    printf("masukkan nilai pertama:" );
    scanf("%f", &c);

    printf("masukkan nilai kedua:");
    scanf("%f", &d);

    float hasil = c + d;

    printf("hasil dari penjumlahan nilai pertama \"%.2f\"", c);
    printf(" dan nilai kedua \"%.2f\"", d);
    printf(" adalah %.2f", hasil);

    return 0;
    
}