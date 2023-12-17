#include <stdio.h>
int reverse(int angka){
    int reversed = 0;
    int sisa;
    while (angka > 0){;
        sisa = angka % 10;
        reversed = reversed * 10 + sisa;
        angka /= 10;}
    return reversed;
    
}
        int main(){
            int A, B;
            scanf("%d %d", &A, &B);
            A = reverse(A);
            B = reverse(B);
            int C = A + B;
            printf("%d", reverse(C));
        }