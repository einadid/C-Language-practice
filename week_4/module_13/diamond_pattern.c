
#include <stdio.h>

int main() {
    int n;
    char ch;

    scanf("%d", &n);
    scanf(" %c", &ch);   // space before %c is important

    int star = 1;
    int space = n - 1;

    // Upper part
    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= space; k++) {
            printf(" ");
        }
        for(int j = 1; j <= star; j++) {
            printf("%c", ch);
        }
        printf("\n");
        star += 2;
        space--;
    }

    // Lower part
    star -= 4;
    space += 2;

    for(int i = 1; i < n; i++) {
        for(int k = 1; k <= space; k++) {
            printf(" ");
        }
        for(int j = 1; j <= star; j++) {
            printf("%c", ch);
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}
