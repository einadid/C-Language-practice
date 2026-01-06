#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int x = a%10;
    int y = a/10;

    if ( x % y == 0 || y % x == 0  )
    {
        printf("YES\n");
    } else 
     {
        printf("NO\n");
    }

    return 0;
}