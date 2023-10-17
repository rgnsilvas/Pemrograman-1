#include <stdio.h>

int main(){
    float nilai1, nilai2, hasil;

    printf("Input\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &nilai2);

    hasil = nilai1 + nilai2;

    printf("\nOutput\n");
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);

    return 0;
}