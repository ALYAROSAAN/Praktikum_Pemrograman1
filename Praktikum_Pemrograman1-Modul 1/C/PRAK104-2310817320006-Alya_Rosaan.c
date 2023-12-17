#include <stdio.h>

int main(){
    int a = 400000 , b = 350000;
    float sum_a = a-(a*13/100) , sum_b = b-(b*21/100);

    printf("harga sepatu A adalah %d\n" ,a);
    printf("harga sepatu B adalah %d\n" ,b);
    printf("sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n", sum_a);
    printf("sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f", sum_b);
    
    return 0;

}