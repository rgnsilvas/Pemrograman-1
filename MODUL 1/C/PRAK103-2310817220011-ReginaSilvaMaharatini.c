#include <stdio.h>

int main() {
    int a=9 ,b=6 ,x=10 ,y=7;
    float sum = a+b ,suma = sum*x ,sumb = suma/y;

    printf("Variabel a bernilai %d\n" ,a);
    printf("Variabel b bernilai %d\n" ,b);
    printf("Variabel x bernilai %d\n" ,x);
    printf("Variabel y bernilai %d\n" ,y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f" ,sumb);
    return 0;

}