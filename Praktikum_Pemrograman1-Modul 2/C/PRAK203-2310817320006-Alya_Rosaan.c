#include <stdio.h>

int main(){
    //case 1
    float a,b,i,j,x,y;
    float c,d,k,l,w,z;
    printf("");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float jumlah = (a-b)*(i/j)-(x+y);

    printf("%.3f\n", jumlah);

    //case 2
    printf("");
    scanf("%f %f", &c, &d);
    printf("");
    scanf("%f %f", &k, &l);
    printf("");
    scanf("%f %f", &w, &z);
   
    float hasil = (c-d)*(k/l)-(w+z);

    printf("%.3f\n", hasil);

    return 0;
}