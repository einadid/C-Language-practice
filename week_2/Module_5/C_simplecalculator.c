#include <stdio.h>

int main()
{
    int X, Y ;
    int sum , mul , sub;
    scanf("%d %d", &X , &Y);

    sum = X + Y;
    mul = X * Y;
    sub = X - Y;

    printf("%d + %d = %d\n", X , Y, sum);
    printf("%d * %d = %d\n", X , Y, mul);
    printf("%d - %d = %d\n", X , Y, sub);


    return 0;
}