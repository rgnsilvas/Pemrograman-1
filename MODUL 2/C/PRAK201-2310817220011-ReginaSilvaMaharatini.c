#include <stdio.h>
#include <string.h>

int main(){
        char nama[30], nim[30], kelas[30], ttl[30], alamat[30] ,hobby[30] ,nohp[30];

    printf("Input\n");
    printf("Nama                    :");
    gets(nama);
    printf("NIM                     :");
    gets(nim);
    printf("Kelas Paralel           :");
    gets(kelas);
    printf("Tempat/Tanggal Lahir    :");
    gets(ttl);
    printf("Alamat                  :");
    gets(alamat);
    printf("Hobby                   :");
    gets(hobby);
    printf("No.HP                   :");
    gets(nohp);

    printf("\n");

    printf("Output\n");
    printf("Nama                    :%s\n", nama);
    printf("NIM                     :%s\n", nim);
    printf("Kelas Pralel            :%s\n", kelas);
    printf("Tempat/Tanggal Lahir    :%s\n", ttl);
    printf("Alamat                  :%s\n", alamat);
    printf("Hobby                   :%s\n", hobby);
    printf("No.HP                   :%s\n", nohp);

    return 0;
}

