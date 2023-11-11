#include <stdio.h>
int main(){
    float a, b, c;
    while(1){
    printf("Pilih Program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan =\t");
    scanf("%f", &a);
    if(a > 5){
        printf("Input anda salah, silahkan coba lagi\n");
        continue;
    }else if (a == 5){
        printf("Terima kasih, telah menggunakan kalkulator Regina Silva Maharatini\n");
        break;
    }
    printf("Masukkan Nilai Pertama =");
    scanf("%f", &b);
    printf("Masukkan Nilai Kedua =");
    scanf("%f", &c);
    if(a == 1){
        printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n",b,c, b+c);
    }else if(a==2){
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n",b,c, b-c);
    }else if(a==3){
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n",b,c, b*c);
    }else if (a==4){
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n",b,c, b/c);

    }
    
    }
return 0;}