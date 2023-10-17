#include <stdio.h>

    int main() {
    int a=400000 ,b=350000;
    float suma = a*0.87 ,sumb = b*0.79;

    printf("Harga sepatu A adalah %d\n" ,a);
    printf("Harga sepatu B adalah %d\n" ,b);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n" ,suma);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f\n" ,sumb);
    return 0;
}