#include <stdio.h>

void Biodata(int tahun_lahir, char *namaku, char *asal){
    int tahun_sekarang = 2023;
    int umur = tahun_sekarang - tahun_lahir;
    printf("perkenalkan nama saya: %s\n", namaku);
    printf("umur saya: %d\n", umur);
    printf("saya adalah angkatan: %d\n", tahun_sekarang);
    printf("asal saya dari:: %s\n", asal);
}

int main(){
    int tahun_lahir;
        char namaku[20], asal[15];
        scanf("%d", &tahun_lahir);
        scanf("%s", &namaku);
        scanf("%s", &asal);
    Biodata(tahun_lahir, namaku, asal);
    return 0;
}