#include<stdio.h>
int main()
{
    int n ; 
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        } 
        else if (i % 1 == 0)
        {
            printf("%d is Odd\n", i);
        }
    }
    return 0;
}