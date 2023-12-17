#include <stdio.h>

int main(){
    int a,b,c;

    a = 4;
    printf("variabel a bernilai 4\n", a);
    b = 8;
    printf("variabel b bernilai 8\n", b);
    c = 3;
    printf("variabel c bernilai 3\n", c);

    printf("apakah a sama dengan b? jawabannya adalah %d\n", a==b);
    printf("apakah b lebih besar dari c? jawabannya adalah %d\n", b>c);
    printf("apakah a tidak sama dengan c? jawabannya adalah %d", a!=c);

    return 0;

}