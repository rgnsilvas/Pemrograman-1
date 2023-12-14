#include<stdio.h>
int main(){
    int n1, n2, bil, x;
    scanf("%d %d", &n1, &n2);
    if(n1 != n2){
          printf("Jumlah tidak sama");
    }else{
    int b1[n1]; int b2[n2];

    for(x = 0; x < n1; x++){
          scanf("%d", &b1[x]);}
    for(x = 0; x < n2; x++){
          scanf("%d", &b2[x]);}
    for(x = 0; x < n1; x++){
          bil = b1[x] * b2[x];
          printf("%d ", bil);}}}