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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (ar[i]%2 != 0)
        {
            /* code */
            count += ar[i];
        }
        
    }
    printf("%d\n", count);
    
    
    return 0;
}