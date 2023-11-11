#include <stdio.h>
int main() {
    int bil;
    printf("Input\n");
    scanf("%d", &bil);
    for (int i = 1; i <= bil; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);}}
    printf("\n");
    for (int i = bil; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);}}
    printf("\n");
 return 0;}
