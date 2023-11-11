#include <stdio.h>

int main(){
int num;
    printf("Input");
    scanf("%d", &num);
    printf("\nOutput");

    if (num >=80 ){
        printf ("A");
    }if (num <=79 && num >=70 ){
        printf ("B");
    }if (num <=69 && num >=60 ){
        printf ("C");
    }if (num <=59 && num >=50 ){
        printf ("D");
    }else if (num <50 ){
        printf ("E");
    }
    return 0;
}