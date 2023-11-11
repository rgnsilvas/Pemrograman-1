#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a < b){
        for(c = a; c<= b; a++,b--){
            printf("%d ",a);
            printf("%d ",b);
            if(c < b){
                printf(" - ");
            }
        }
    }else if (a > b){
        for(c = b; c <= a; a--,b++){
            printf("%d ",a);
            printf("%d ",b);
            if(c < a){
                printf(" - ");
            }
        }
    }
}