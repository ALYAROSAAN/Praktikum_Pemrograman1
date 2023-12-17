#include <stdio.h>

int main(){
    int a,b,x,y;

    a = 9;
    printf("variabel a bernilai 9\n", a);
    b = 5;
    printf("variabel b bernilai 5\n", b);
    x = 8;
    printf("variabel x bernilai 8\n", x);
    y = 8;
    printf("variabel y bernilai 8\n", y);

    int jumlah = (a % b) + (x % y);
    printf("total sisanya yaitu: %d\n ",jumlah);
}