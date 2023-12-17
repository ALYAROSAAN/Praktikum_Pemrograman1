#include <stdio.h>

int main(){
    // panjang sisi segitiga
    int a = 4, b = 5, c = 7;
    // harga tanah per meter
    int harga = 85000;

    printf("panjang sisi segitiga berturut-turut adalah 4, 5, 7\n");
    int jumlah_keliling = a + b + c;
    
    printf("keliling tanah pak Dengklek adalah %d\n", jumlah_keliling );
    printf("harga tanah per meter adalah 85000\n");

    int hasil = jumlah_keliling*harga;  
    printf("biaya yang diperlukan pak dengklek adalah : %d", hasil);

}