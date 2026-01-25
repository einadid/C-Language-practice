#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // leading spaces
        for(int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // stars with space
        for(int j = 1; j <= i; j++) {
            // printf("* ");
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
