#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int r = a; r >=1; r--)
    {
        {
            for (int i = r; i >=1; i--)
            {
                printf("%d", i);
            }
            printf("\n");
        }
    }
    return 0;
}