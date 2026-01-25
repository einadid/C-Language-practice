#include <stdio.h>
int evenodd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int res = evenodd(n);

    if (res == 1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}