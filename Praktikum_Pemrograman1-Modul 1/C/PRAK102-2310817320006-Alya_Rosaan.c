#include <stdio.h>

int main(){
    float a,b,c, jumlah;

    a=4;
    printf("variabel a bernilai 4\n" ,a);
    b=8;
    printf("variabel b berniali 8\n" ,b);
    c=3;
    printf("variabel c bernilai 3\n",c);

    jumlah = a * b / c;
    printf("jumlah variabel tersebut adalah = %.6f" ,jumlah);

    return 0;

}