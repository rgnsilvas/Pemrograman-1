#include <stdio.h>
int main() {
    int n1, n2, hasil = 0, result = 0, i, j;
    scanf("%d %d", &n1, &n2);
    for (i = 0; i < n1; i++) {
        for (j = i; j >= 0; j--) {
            printf("(%d * %d)", j + 1, n2);
            if (j > 0) {
                printf(" + ");}}
        hasil += (i + 1) * n2;
        printf(" = %d\n", hasil);
        result += hasil;}
    printf("%d", result);
    return 0;}
