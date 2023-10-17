#include <stdio.h>

    int main() {
    int sisi1=4 ,sisi2=5 ,sisi3=7;
    int keliling = sisi1 + sisi2 + sisi3;
    int htn = 85000;
    int sum = keliling*htn;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7 \n");
    printf("Keliling Tanah Pak Dengklek adalah %d\n" ,keliling);
    printf("Harga tanah Per Meter adalah %d\n" ,htn);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n" ,sum);

    return 0;
}