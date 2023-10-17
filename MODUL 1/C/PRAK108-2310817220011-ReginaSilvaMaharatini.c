#include <stdio.h>

    int main() {
    float phi = 3.14 ,putar=5 ,jarak=14;
    float keliling = jarak/putar ,jari=keliling/(2*phi);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n" ,putar);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n" ,jarak);
    printf("\n");
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n" ,jari);

    return 0;
}