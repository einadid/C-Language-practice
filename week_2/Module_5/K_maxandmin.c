#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < c && a < b)
    {
        printf("%d a ", a);
    }
    else if (b < a && b < c)
    {
        printf("%d b ", b);
    }
    else if (c < a && c < b)
    {
        printf("%d c ", c);
    }

    if (a > b && a > c)
    {
        printf("%d A ", a);
    }
    else if (b > a && b > c)
    {
        printf("%d B ", b);
    }
    else if (c > a && c > b)
    {
        printf("%d C ", c);
    }

    return 0;
}