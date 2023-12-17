#include <stdio.h>

int main(){
    int myNum;
    int myNum2;
    printf("jumlah pasukan yang dibawa yu zhong?", myNum);
    scanf("%d", &myNum);

    printf("jumlah pahlawan?", myNum2);
    scanf("%d", &myNum2);

    int jumlah_pasukan = myNum/myNum2;

    printf("jumlah pasukan yang harus dikalahkan setiap pahlawan adalah = %d\n", jumlah_pasukan);
}