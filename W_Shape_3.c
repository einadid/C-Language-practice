#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= N - i; s++) {
            printf(" ");
        }
        for (int star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = N; i >= 1; i--) {
        for (int s = 1; s <= N - i; s++) {
            printf(" ");
        }
        for (int star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
