#include <stdio.h>
int evenodd()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int res = evenodd();
    if (res == 1)
        printf("Even");
    else
        printf("Odd");

    return 0;
}