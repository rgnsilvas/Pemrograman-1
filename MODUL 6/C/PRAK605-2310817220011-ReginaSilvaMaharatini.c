#include<stdio.h>
int main(){
        int mtrA[10][10], mtrB[10][10], mtrAxB[10][10];
        int a, b, c, d, jumlah=0;
        scanf("%d", &d);
        printf("Matriks A\n");
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              scanf("%d", &mtrA[a][b]);}
              }  
        printf("Matriks B\n");
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              scanf("%d", &mtrB[a][b]);}
              }
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              for(c=0; c<d; c++){
                  jumlah = jumlah + mtrA[a][c] * mtrB[c][b];}      
                mtrAxB[a][b]= jumlah;
                jumlah = 0;}}
        printf("Matriks AXB\n");
        for (a=0; a<d; a++){
          for(b=0; b<d; b++){
                    printf("%d ", mtrAxB[a][b]);}
          printf("\n");}}
          