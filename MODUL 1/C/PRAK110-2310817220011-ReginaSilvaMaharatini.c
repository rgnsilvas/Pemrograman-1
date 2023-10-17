#include <stdio.h>

    int main() {
    float alas=5 ,tinggi=12; 
    float sisi_a=12 ,sisi_b=13 ,sisi_c=5;
    float keliling= sisi_a+sisi_b+sisi_c;
    float luas=0.5*alas*tinggi;

    printf("Diketahui : \n");
    printf("Alas = %.0f cm\n" ,alas);
    printf("Tinggi = %.0f cm\n" ,tinggi);
    printf("\n");
    printf("Jawab : \n");
    printf("Sisi A = ? cm\n");
    printf("Sisi B = ? cm\n");
    printf("Sisi C = ? cm\n");
    printf("Keliling = %.0f cm\n" ,keliling);
    printf("Luas = %.0f cm\n" ,luas);

    return 0;
}