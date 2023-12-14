#include<stdio.h>
int main(){
          int ruang, zet, n;
          scanf("%d", &ruang);  
          int total[ruang];
          for(n=0; n<ruang; n++){
                    scanf("%d", &zet);
                    total[n] = zet;}
          for(n = 0; n<ruang; n++){
                    printf("%d ", total[n] * (n+1));}  
}