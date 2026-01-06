#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if (n > 0)
    {
        /* code */
        for (int  i = 1; i <= n; i++)
        {
            printf("%d ", i);
        } 
        
    }
    
    else {
        for (size_t i = n; i <= 0  ; i++)
        {
            printf("%d ", i);
        }
}

    
    
    return 0;
}