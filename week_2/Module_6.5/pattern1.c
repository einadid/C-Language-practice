#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int r = 1; r <=a; r++)
    {
        {
            for (int i = 1; i <=r; i++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    return 0;
}