#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);     

    int N = a / 1000;     

    if (N % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
