#include <stdio.h>
#include <string.h>

int main(){
    char nama[30], NIM[30], kelas_paralel[30], Tempat_Tanggal_Lahir[30], alamat[30], hobby[30],No_HP[13];
    
    printf("nama                :");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                 : ");
    fgets(NIM, sizeof(NIM), stdin);

    printf("kelas paralel       :");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);

    printf("tempat/tanggal lahir:");
    fgets(Tempat_Tanggal_Lahir, sizeof(Tempat_Tanggal_Lahir), stdin);

    printf("alamat              :");
    fgets(alamat, sizeof(alamat), stdin);

    printf("hobby               :");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. hp              :");
    fgets(No_HP, sizeof(No_HP), stdin);
}