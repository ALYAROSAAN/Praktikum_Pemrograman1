#include <stdio.h>

int main(){
    float a,b,x,y;

    a=9;
    printf("variabel a bernilai 9\n", a);
    b=6;
    printf("variabel b bernilai 6\n", b);
    x=10;
    printf("variabel x bernilai 10\n", x);
    y=7,0;
    printf("variabel 7 bernilai 7\n", y);

    float jumlah = (a + b) * x / y;
    printf("jumlah variabel tersebut adalah = %.2f" ,jumlah);

    return 0;
}