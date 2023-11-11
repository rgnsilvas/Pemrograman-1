#include <stdio.h>

int main(){
    int num;
    printf("Input\n");
    scanf("%d", &num);
    printf("\nOutput");

    if(num == 0){
        printf("Nol");
    } else if(num >= 1 && num <= 9){
        printf("Satuan");
    } else if(num >= 10 && num <= 19){
        printf("Belasan");
    } else if(num >= 20 && num <= 99){
        printf("Puluhan");
    } else if(num >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}