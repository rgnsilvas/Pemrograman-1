#include <stdio.h>
int reverse(int a){ // Lengkapi Function ini
     int reverse = 0;
     while(a!=0){     
          reverse = reverse * 10;
          reverse = reverse + a%10;
          a = a/10;}
    return reverse;
}

int main() {
 int A, B;
 scanf("%d %d",&A,&B);
 A=reverse(A);
 B=reverse(B);
 int C = A+B;
 printf("%d",reverse(C));
}
