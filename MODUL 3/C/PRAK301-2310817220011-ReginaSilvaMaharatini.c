#include <stdio.h>

int main() {
    int n1, n2;

    printf("Input\n");
    scanf("%d %d", &n1, &n2);
    printf("\nOutput\n");

    if (n1 < n2) {
        printf("%d %d\n", n1, n2);
    } else {
        printf("%d %d\n", n2, n1);
    }

    return 0;
}
