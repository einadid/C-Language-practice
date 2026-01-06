#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (ar[i]%2 == 0)
        {
            /* code */
            printf("%d\n", ar[i]);
        }
        
    }
    
    
    return 0;
}