#include <stdio.h>
int main()
{
    int tk, b, c, d;
    scanf("%d %d %d %d", &tk, &b, &c, &d);
    if (tk > d)
    {
        printf("a is greater than d");
    }
    else if (b > tk)
    {
        printf("b is greater than a");
    }
    return 0;
}