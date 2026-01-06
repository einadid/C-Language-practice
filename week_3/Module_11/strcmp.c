#include <stdio.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a ,&b);

    printf("%d", strcmp(a, b));


    // -1 <- 1st value is smaller
    // 0 <- equal
    // 1 <- 2nd value is smaller
    
    
    return 0;
}